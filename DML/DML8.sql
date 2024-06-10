insert into "ObjectsCopy" values
 (1,1,1,1)
 , (1,1,1,1)

delete
from "ObjectsCopy"
where price not in
(select max(price) from "ObjectsCopy" 
group by "ObjectsCopy"."price");
