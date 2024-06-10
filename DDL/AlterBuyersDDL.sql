--Создание ограничений уникальности для колонки имя покупателей
alter table "Buyers"
add constraint "UQ_Buyer_Name"
unique ("buyer_name");