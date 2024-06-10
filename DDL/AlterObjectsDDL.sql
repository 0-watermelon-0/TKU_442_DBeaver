----Создание ограничений уникальности для колонки название товара
alter table "Objects"
add constraint "UQ_Object_Name"
unique ("name_object");

--правило формирования колонки количество
UPDATE "total" AS p
SET "quantity" = p."total" / o."price"
FROM "Objects" AS o
WHERE p."id_object" = o."ID";