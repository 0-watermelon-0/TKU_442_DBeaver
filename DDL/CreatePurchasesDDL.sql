--Создание таблицы Покупки
create table "Purchases"
(
"ID" int primary key not null,
"id_object" int,
"id_buyer" int, 
"quantity" int,
"total" int,
"purchase_date" date not null
);