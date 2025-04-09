# 📚 DataStructures – Interaktywny system struktur danych w C++

Projekt zawiera implementacje podstawowych struktur danych w języku C++ oraz prosty interfejs tekstowy umożliwiający interaktywne testowanie tych struktur z poziomu terminala.

---

## 🧩 Co zawiera projekt?

- 🧱 **Dynamiczne struktury danych**: m.in. listy, stosy, kolejki (w przygotowaniu)
- 🧠 **Własnoręczne zarządzanie pamięcią** – bez STL
- 🖥️ **Interaktywne menu w konsoli** – umożliwia wybór struktur i operacji
- 📂 Przejrzysty podział katalogów: `structures/`, `menu/`, `data/`, `utilities/`

---

## 📂 Struktura katalogów

| Folder       | Zawartość                                                                 |
|--------------|---------------------------------------------------------------------------|
| `structures/` | Implementacje struktur danych (np. listy jednokierunkowej, dwukierunkowej) |
| `menu/`       | Kod odpowiedzialny za wyświetlanie i obsługę menu w terminalu             |
| `data/`       | Przykładowe dane / testowe struktury / szkieletowe funkcje                |
| `utilities/`  | Funkcje pomocnicze (np. walidacja danych, komunikaty)                     |
| `main.cpp`    | Punkt startowy aplikacji, integruje wszystko w jedno działające menu      |

---

## 🧪 Jak działa aplikacja?

Po uruchomieniu programu wyświetlane jest interaktywne **menu w konsoli**, które umożliwia wybór struktury oraz operacji na niej.

📸 Przykład działania:
![{B5DB2043-1B64-4388-8B64-7691C4D9BA9B}](https://github.com/user-attachments/images/2ca3d5f1-c2a2-423b-b98e-cc39090339d5)
![{9400877C-66CC-4DA5-97B9-44451DCECF76}](https://github.com/user-attachments/images/40c97f2d-4cb9-4dd8-9150-f6c1f5485bf0)


---

## ▶️ Jak uruchomić?

1. Sklonuj repozytorium:

```bash
git clone https://github.com/wiktoriamiich/DataStructures.git
cd DataStructures
```
2. Skompiluj program:

```bash
g++ main.cpp -o datastructures
```

3. Uruchom aplikację:

```bash
./datastructures
```

