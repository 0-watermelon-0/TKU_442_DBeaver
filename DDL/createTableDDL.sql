--Создание БД "pc_shop"
create database "pc_shop";



--Создание таблицы Покупатели
create table "Buyers" 
(
"ID" serial primary key not null,
"buyer_name" varchar(30) not null,
);

--Создание ограничений уникальности для колонки имя покупателей
alter table "Buyers"
add constraint "UQ_Buyer_Name"
unique ("buyer_name");





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

--Добавление внешних ключей
alter table "Purchases"
add constraint "FK_Purchases_id_buyer"
foreign key ("id_buyer")
references "Buyers" ("ID");

--Добавление внешних ключей
alter table "Purchases"
add constraint "FK_Purchases_id_object"
foreign key ("id_object")
references "Objects" ("ID");



--правило формирования колонки количество
UPDATE "total" AS p
SET "quantity" = p."total" / o."price"
FROM "Objects" AS o
WHERE p."id_object" = o."ID";



--Создание таблицы Товары
create table "Objects"
(
"ID" int primary key not null,
"name_object" varchar(30) not null,
"manufacturer" varchar(30) not null,
"price" int not null
);
----Создание ограничений уникальности для колонки название товара
alter table "Objects"
add constraint "UQ_Object_Name"
unique ("name_object");
