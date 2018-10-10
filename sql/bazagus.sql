-- bazagus.sql
DROP TABLE IF EXISTS dane_demograficzne;
DROP TABLE IF EXISTS miasta;
DROP TABLE IF EXISTS powierzchnie;
--dla testów
CREATE TABLE miasta (
    id_miasta INTEGER PRIMARY KEY AUTOINCREMENT,
    nazwa_miasta TEXT(30),
    wojewodztwo TEXT (20)
);

CREATE TABLE dane_demograficzne (
    id_mieszkancy INTEGER PRIMARY KEY AUTOINCREMENT,
    liczba_mieszkancow INTEGER,
    liczba_kobiet INTEGER,
    grupa_wiekowa TEXT (15),
    data_aktualizacji DATE,
    id_miasta INTEGER, 
    FOREIGN KEY (id_miasta) REFERENCES miasta(id_miasta)
);
CREATE TABLE powierzchnie (
    id_powierzchchnia INTEGER PRIMARY KEY AUTOINCREMENT,
    powierzchnia_miasta DECIMAL,
    powierzchnia_zielone DECIMAL,
    data_aktualizacji DATE,
    id_miasta INTEGER,
    FOREIGN KEY (id_miasta) REFERENCES miasta(id_miasta)
);
--z miejsca gdzie jest plik
--sqlite3 baza.db < bazagus.sql
--sqlitebaza.db
--sqlite>.table
--sqlite>.schema
--sqlite>.quit
