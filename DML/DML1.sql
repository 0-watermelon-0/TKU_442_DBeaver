INSERT INTO Buyers (ID, buyer_name) VALUES
(1, 'Иванов')
, (2, 'Петров')
, (3, 'Сидоров')
, (4, 'Кузнецов');

--Заполнение таблицы Товары
INSERT INTO "Objects" ("ID", "name_object", "manufacturer", "price") VALUES
  (1, 'Принтер', 'HP', 15000)
, (2, 'Сканер', 'Epson', 10000)
, (3, 'Копир', 'Canon', 25000)
, (4, 'Факс', 'Brother', 20000);

--Заполнение таблицы Покупки
INSERT INTO "Purchases" ("ID", "id_buyer", "id_object", "purchase_date", "total", "sale") VALUES
(1, 1, 1, '2024-05-15', 50000, 0),
(2, 2, 2, '2024-05-14', 70000, 0),
(3, 3, 3, '2024-05-13', 30000, 0),
(4, 4, 4, '2024-05-12', 20000, 0);
