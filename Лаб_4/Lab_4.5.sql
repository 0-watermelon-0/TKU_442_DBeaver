--5	Показать товары, цена которых больше средней цены товара того же цвета
-- (цвет определен) (Таблица Production.Product). Показать поля Name, 
--ListPrice и Color
SELECT "Name", "ListPrice", "Color"
FROM "Production"."Product"
WHERE "ListPrice" > (
    SELECT AVG("ListPrice")
    FROM "Production"."Product"
    WHERE "Color" = 'Red'
)
AND "Color" = 'Red';
