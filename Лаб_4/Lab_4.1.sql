--1	Показать товар самого большого размера. (Таблица Production.Product).
-- Вывести наименование и размер товара. Не учитывать размер NULL и 0
SELECT "ProductNumber" , "Size"
FROM "Production"."Product"
WHERE "Size" >= '0'
ORDER BY "Size" DESC
LIMIT 1;
