--Показать все названия товаров (Name), содержащие 'Frame' («рама») 
--и ID моделей товаров (ProductModelID) из таблицы Production.ProductModel
SELECT  "Name"  ,"ProductModelID"  
FROM "Production"."ProductModel"  
WHERE "Name"  LIKE  '%Frame%';
