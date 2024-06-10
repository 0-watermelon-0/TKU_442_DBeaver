--Показать идентификационный номер сотрудника (BusinessEntityID), номер аккаунта
--название поставщика (Name) и URL поставщика (PurchasingWebServiceURL) 
--из таблицы Purchasing.Vendor, где у поставщика имеется URL
SELECT  "BusinessEntityID" ,"AccountNumber" ,"Name" ,"PurchasingWebServiceURL"
FROM "Purchasing"."Vendor" ;
