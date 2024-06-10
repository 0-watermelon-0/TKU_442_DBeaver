--3)	Показать максимальный вес для товара в каждой линейке продуктов 
--ProductLine из таблицы Production.Product (из выборки исключить пустые поля). 
SELECT "ProductLine", MAX("Weight") AS MaxWeight
FROM "Production"."Product"
GROUP BY "ProductLine";
