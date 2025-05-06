# Jeu-de-poker
jeu de poker écrit en console.

note: Pour le debut ça sera d'abord un joueur 

le programme doit générer les cartes, les mélanger, les distribuer en main de cinq cartes .
ensuite le programme doit évaluer  la main du joueur et determine s'il a une paire une double paire un brelan….
faire un jeu de cartes ou la machine determine si j'ai une paire ou non

chaque couleur  a treize cartes
4couleur trèfle carreau pique cœur

créer une carte pour chaque combinaison

principe du jeu: chaque joueur a 5 cartes et doit former la best combi possible


paire: constituée de deux cartes de la meme valeur puis de trois quatre cartes différentes entre elles

double paire: constituée de deux paires de cartes d la meme valeur et une carte qui leur est différente

brelan: trois cartes de la meme valeur et deux cartes différentes

carré: quatre cartes de la meme valeur et une different

full: brelan + une paire

couleur: cinq cartes de la meme couleur cad cœur,carreau trefle et pique

quinte flush: cinq cartes consecutives en aleurnet de meme couleur

classement du + puissant au - puissant:
1. quinte flush royal (as,roi,dame,valet,10) de la meme couleur
2. quinte flush
3. carré
4. full(brelan+ paire)
5. couleur(meme couleur +non consécutives)
6. suite(consecutives + mem couleur )
7. brelan
8. double paire
9. paire




1: fonction qui génère le jeu
2: fonction qui distribue 5 cartes à chaque joueurs
3: fonction qui mélange les cartes
