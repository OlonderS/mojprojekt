DROP TABLE IF EXISTS stanowiska;
CREATE TABLE stanowiska (
    id_stanowiska INTEGER PRIMARY KEY AUTOINCREMENT,
    stanowisko TEXT (15)
    );

DROP TABLE IF EXISTS pracownicy;
CREATE TABLE pracownicy (
    id_pracownika INTEGER PRIMARY KEY AUTOINCREMENT,
    imie TEXT (20),
    nazwisko TEXT (20),
    kod STRING (20),
    miasto_z TEXT (25),
    ulica TEXT (20),
    data_u DATE,
    miasto_u TEXT (20)
);

DROP TABLE IF EXISTS place;
CREATE TABLE place (
    id_p INTEGER NOT NULL,
    id_s INTEGER NOT NULL,
    placa INTEGER,
    data_z DATE, 
    
    FOREIGN KEY (id_p) REFERENCES kontakty(id_pracownika),
    FOREIGN KEY (id_s) REFERENCES stanowiska(id_stanowiska)
    
);

DROP TABLE IF EXISTS kontakty;
CREATE TABLE kontakty (
    id_pracownika INTEGER NOT NULL,
    typ_k BOOLEAN,
    kontakt STRING (15),
    uwagi TEXT (50),
     
    FOREIGN KEY (id_pracownika) REFERENCES pracownicy(id_pracownika)
);
    


--INSERT INTO nazwiska(nr_ucznia, nazwisko, imie1, imie2)
--VALUES (9201, "Adamczuk", "Agata", "");
--INSERT INTO nazwiska
--VALUES (9802, "Adamiuk", "Marta", "");

-- sqlite3 baza.db < szkola.sql
-- sqlite3 baza.db
-- .table
-- .schema
-- .quit
