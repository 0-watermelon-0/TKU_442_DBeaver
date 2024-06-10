--Отсортировать строки таблицы Production.ScrapReason в обратном
--алфавитном порядке значения брака Name
--Показать поля ScrapReasonID, Name, ModifiedDate.
SELECT  "ScrapReasonID"  ,"Name"  ,"ModifiedDate"  
FROM "Production"."ScrapReason" 
ORDER BY "Name" DESC ;
