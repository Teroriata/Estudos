import requests
import tkinter as tk
from tkinter import ttk

RIOT_API_KEY = "RGAPI-8dd4472f-51ed-4500-a5fc-bbd713f4ef50"
GAME_NAME = "tero"
TAG_LINE = "inf"

# Função para pegar o PUUID
def get_puuid(game_name, tag_line):
    url = f"https://americas.api.riotgames.com/riot/account/v1/accounts/by-riot-id/{game_name}/{tag_line}"
    headers = {"X-Riot-Token": RIOT_API_KEY}
    response = requests.get(url, headers=headers)
    response.raise_for_status()
    return response.json()["puuid"]

# Função para pegar as maestrias dos campeões
def get_champion_masteries(puuid):
    url = f"https://br1.api.riotgames.com/lol/champion-mastery/v4/champion-masteries/by-puuid/{puuid}"
    headers = {"X-Riot-Token": RIOT_API_KEY}
    response = requests.get(url, headers=headers)
    response.raise_for_status()
    return response.json()

# Função para pegar o nome dos campeões a partir do Data Dragon
def get_champion_names():
    url = 'https://ddragon.leagueoflegends.com/cdn/13.16.1/data/pt_BR/champion.json'
    response = requests.get(url)
    if response.status_code == 200:
        data = response.json()
        champions = data['data']
        return {int(champ['key']): champ['name'] for champ in champions.values()}
    else:
        raise Exception(f"Erro ao acessar os dados dos campeões: {response.status_code}")

# Função para criar a interface gráfica
def create_gui(puuid, masteries, champion_names):
    # Criando a janela principal
    root = tk.Tk()
    root.title("Masteries dos Campeões")

    # Exibindo o PUUID
    puuid_label = tk.Label(root, text=f"PUUID: {puuid}", font=("Arial", 12))
    puuid_label.pack(pady=10)

    # Criando a árvore para mostrar as maestrias dos campeões
    tree = ttk.Treeview(root, columns=("Champion", "Level", "Points"), show="headings")
    tree.heading("Champion", text="Campeão")
    tree.heading("Level", text="Nível")
    tree.heading("Points", text="Pontos")
    
    # Adicionando os dados das maestrias na árvore
    for champ in masteries[:5]:
        champion_id = champ['championId']
        champion_name = champion_names.get(champion_id, "Desconhecido")
        tree.insert("", "end", values=(champion_name, champ['championLevel'], champ['championPoints']))
    
    tree.pack(pady=10)

    # Botão para fechar a aplicação
    close_button = tk.Button(root, text="Fechar", command=root.quit)
    close_button.pack(pady=10)

    # Iniciando o loop da interface gráfica
    root.mainloop()

# Função principal
def main():
    try:
        # Obtendo o PUUID
        puuid = get_puuid(GAME_NAME, TAG_LINE)

        # Pegando a lista de maestrias
        masteries = get_champion_masteries(puuid)

        # Pegando os nomes dos campeões
        champion_names = get_champion_names()

        # Criando a interface gráfica
        create_gui(puuid, masteries, champion_names)

    except requests.HTTPError as err:
        print("Erro na requisição:", err)
    except Exception as e:
        print("Erro:", e)

if __name__ == "__main__":
    main()
