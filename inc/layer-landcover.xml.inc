<Style name="landcover">
     <Rule>
      <Filter>[leisure] = 'swimming_pool'</Filter>
      &maxscale_zoom14;
     <PolygonSymbolizer>
        <CssParameter name="fill">#b5d0d0</CssParameter>
     </PolygonSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">blue</CssParameter>
        <CssParameter name="stroke-width">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[leisure] = 'playground'</Filter>
      &maxscale_zoom13;
     <PolygonSymbolizer>
        <CssParameter name="fill">#ccfff1</CssParameter>
     </PolygonSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#666</CssParameter>
        <CssParameter name="stroke-width">0.3</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tourism] = 'camp_site' or [tourism]='caravan_site' or [tourism] = 'picnic_site'</Filter>
      &maxscale_zoom13;
     <PolygonSymbolizer>
        <CssParameter name="fill">#ccff99</CssParameter>
        <CssParameter name="fill-opacity">0.5</CssParameter>
     </PolygonSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#666</CssParameter>
        <CssParameter name="stroke-width">0.3</CssParameter>
      </LineSymbolizer>
    </Rule>        
    <Rule>
      <Filter>[tourism] = 'attraction'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer>
        <CssParameter name="fill">#f2caea</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'quarry'</Filter>
      &maxscale_zoom11;
      <PolygonPatternSymbolizer file="&symbols;/quarry2.png" />
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
	<CssParameter name="stroke-width">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'vineyard'</Filter>
      &maxscale_zoom10;
      &minscale_zoom12;
      <PolygonSymbolizer>
        <CssParameter name="fill">#abdf96</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'orchard'</Filter>
      &maxscale_zoom10;
      <PolygonPatternSymbolizer file="&symbols;/orchard.png" />
    </Rule>
    <Rule>
      <Filter>[landuse] = 'vineyard'</Filter>
      &maxscale_zoom13;
      <PolygonPatternSymbolizer file="&symbols;/vineyard.png" />
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom14;
      <Filter>[landuse] = 'cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard'</Filter>
      <PolygonSymbolizer>
        <CssParameter name="fill">#aacbaf</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom18;
      <Filter>[landuse] = 'residential'</Filter>
      <PolygonSymbolizer>
        <CssParameter name="fill">#ddd</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom18;
      <Filter>[landuse] = 'garages'</Filter>
      <PolygonSymbolizer>
        <CssParameter name="fill">#996</CssParameter>
        <CssParameter name="fill-opacity">0.2</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom18;
      <Filter>[military] = 'barracks'</Filter>
      <PolygonSymbolizer>
        <CssParameter name="fill">#ff8f8f</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom13;
      <Filter>[landuse]='field' or [natural]='field'</Filter>
      <PolygonSymbolizer>
        <CssParameter name="fill">#666600</CssParameter>
        <CssParameter name="fill-opacity">0.2</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[landuse]='field' or [natural]='field'</Filter>
      <PolygonSymbolizer>
        <CssParameter name="fill">#666600</CssParameter>
        <CssParameter name="fill-opacity">0.2</CssParameter>
      </PolygonSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#660</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
        <CssParameter name="stroke-width">0.3</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom9;
      &minscale_zoom10;
      <Filter>[military] = 'danger_area'</Filter>
      <PolygonSymbolizer>
        <CssParameter name="fill">pink</CssParameter>
        <CssParameter name="fill-opacity">0.3</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom11;
      &minscale_zoom18;
      <Filter>[military] = 'danger_area'</Filter>
      <PolygonPatternSymbolizer file="&symbols;/danger.png" />
    </Rule>
    <Rule>
      &maxscale_zoom14;
      <Filter>([landuse] = 'cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard') and [religion] = 'jewish'</Filter>
      <PolygonPatternSymbolizer file="&symbols;/cemetery_jewish.18.png" />
    </Rule>
    <Rule>
      &maxscale_zoom14;
      <Filter>([landuse] = 'cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard') and [religion] = 'christian'</Filter>
      <PolygonPatternSymbolizer file="&symbols;/grave_yard.png" />
    </Rule>
    <Rule>
      &maxscale_zoom14;
      <Filter>([landuse] = 'cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard') and [religion] = 'INT-generic'</Filter>
      <PolygonPatternSymbolizer file="&symbols;/grave_yard_generic.png" />
    </Rule>
    <Rule>
      &maxscale_zoom10;
      <Filter>[landuse] = 'meadow' or [landuse] = 'grass'</Filter>
      <PolygonSymbolizer>
        <CssParameter name="fill">#cfeca8</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[leisure] = 'park' or [leisure] = 'recreation_ground'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer>
        <CssParameter name="fill">#b6fdb6</CssParameter>
        <CssParameter name="fill-opacity">0.6</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tourism] = 'zoo'</Filter>
      &maxscale_zoom10;
      <PolygonPatternSymbolizer file="&symbols;/zoo.png" />
    </Rule>
    <Rule>
      <Filter>[leisure] = 'common'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer>
        <CssParameter name="fill">#cfeca8</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[leisure] = 'garden'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer>
        <CssParameter name="fill">#cfeca8</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[leisure] = 'golf_course'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer>
        <CssParameter name="fill">#b5e3b5</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'allotments'</Filter>
      &maxscale_zoom10;
      &minscale_zoom13;
      <PolygonSymbolizer>
        <CssParameter name="fill">#e5c7ab</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'allotments'</Filter>
      &maxscale_zoom14;
      <PolygonPatternSymbolizer file="&symbols;/allotments.png" />
    </Rule>
    <Rule>
      <Filter>[landuse] = 'forest'</Filter>
      &maxscale_zoom8;
      &minscale_zoom13;
      <PolygonSymbolizer>
        <CssParameter name="fill">#8dc56c</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'forest'</Filter>
      &maxscale_zoom14;
      <PolygonPatternSymbolizer file="&symbols;/forest.png" />
    </Rule>
    <Rule>
      <Filter>[landuse]='farmyard'</Filter>
      &maxscale_zoom9;
      <PolygonSymbolizer>
        <CssParameter name="fill">#ddbf92</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'farm' or [landuse]='farmland'</Filter>
      &maxscale_zoom9;
      <PolygonSymbolizer>
        <CssParameter name="fill">#ead8bd</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'recreation_ground' or [landuse] = 'conservation'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer>
        <CssParameter name="fill">#cfeca8</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'village_green'</Filter>
      &maxscale_zoom11;
      <PolygonSymbolizer>
        <CssParameter name="fill">#cfeca8</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'retail'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer>
        <CssParameter name="fill">#f1dada</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'retail'</Filter>
      &maxscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">red</CssParameter>
        <CssParameter name="stroke-width">0.3</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'industrial' or [landuse]='railway'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer>
        <CssParameter name="fill">#dfd1d6</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[power] = 'station' or [power]='generator'</Filter>
      &maxscale_zoom10;
      &minscale_zoom11;
      <PolygonSymbolizer>
        <CssParameter name="fill">#bbb</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[power] = 'station' or [power]='generator'</Filter>
      &maxscale_zoom12;
      <PolygonSymbolizer>
        <CssParameter name="fill">#bbb</CssParameter>
     </PolygonSymbolizer>
    <LineSymbolizer>
        <CssParameter name="stroke">#555</CssParameter>
        <CssParameter name="stroke-width">0.4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[power] = 'sub_station'</Filter>
      &maxscale_zoom13;
      <PolygonSymbolizer>
        <CssParameter name="fill">#bbb</CssParameter>
     </PolygonSymbolizer>
    <LineSymbolizer>
        <CssParameter name="stroke">#555</CssParameter>
        <CssParameter name="stroke-width">0.4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'commercial'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer>
        <CssParameter name="fill">#efc8c8</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'brownfield' or [landuse]='landfill' or [landuse] = 'greenfield' or [landuse]='construction'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer>
        <CssParameter name="fill">#9d9d6c</CssParameter>
        <CssParameter name="fill-opacity">0.7</CssParameter>
     </PolygonSymbolizer>
    </Rule>
     <Rule>
      <Filter>[natural] = 'wood' or [landuse] = 'wood'</Filter>
      &maxscale_zoom8;
      <PolygonSymbolizer>
        <CssParameter name="fill">#aed1a0</CssParameter>
     </PolygonSymbolizer>
    </Rule>
 <Rule>
      <Filter>[natural] = 'desert'</Filter>
      &maxscale_zoom8;
      <PolygonSymbolizer>
        <CssParameter name="fill">#e3b57a</CssParameter>
     </PolygonSymbolizer>
    </Rule>
     <Rule>
      <Filter>[natural] = 'sand'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer>
        <CssParameter name="fill">#ffdf88</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'heath'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer>
        <CssParameter name="fill">#d6d99f</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'scrub'</Filter>
      &maxscale_zoom10;
      &minscale_zoom13;
      <PolygonSymbolizer>
        <CssParameter name="fill">#b5e3b5</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      <Filter>[natural] = 'scrub'</Filter>
      <PolygonPatternSymbolizer file="&symbols;/scrub.png" />
    </Rule>
    <Rule>
      <Filter>[amenity] = 'university' or [amenity] = 'college' or [amenity] = 'school' or [amenity]='hospital' or [amenity]='kindergarten'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer>
        <CssParameter name="fill">#f0f0d8</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'university' or [amenity] = 'college' or [amenity] = 'school' or [amenity]='hospital' or [amenity]='kindergarten'</Filter>
      &maxscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">brown</CssParameter>
        <CssParameter name="stroke-width">0.3</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'parking'</Filter>
      &maxscale_zoom10;
     <PolygonSymbolizer>
         <CssParameter name="fill">#f7efb7</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'parking'</Filter>
      &maxscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#eeeed1</CssParameter>
        <CssParameter name="stroke-width">0.3</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'apron'</Filter>
      &maxscale_zoom12;
      <PolygonSymbolizer>
         <CssParameter name="fill">#e9d1ff</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'aerodrome'</Filter>
      &maxscale_zoom12;
      <PolygonSymbolizer>
         <CssParameter name="fill">#ccc</CssParameter>
        <CssParameter name="fill-opacity">0.2</CssParameter>
      </PolygonSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#555</CssParameter>
        <CssParameter name="stroke-width">0.2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'beach'</Filter>
      &maxscale_zoom13;
      <PolygonPatternSymbolizer file="&symbols;/beach.png" />
    </Rule>
    <Rule>
      <Filter>[highway] = 'services' or [highway] = 'rest_area'</Filter>
      &maxscale_zoom14;
      <PolygonSymbolizer>
        <CssParameter name="fill">#efc8c8</CssParameter>
      </PolygonSymbolizer>
   </Rule>
    <!--Rule>
      <ElseFilter/>
      &maxscale_zoom10;
      <PolygonSymbolizer>
        <CssParameter name="fill">lightgrey</CssParameter>
     </PolygonSymbolizer>
    </Rule-->
</Style>
<Style name="landcover_line">
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#f2efe9</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">square</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#f2efe9</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">square</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="sports_grounds">
    <Rule>
      <Filter>[leisure] = 'sports_centre' or [leisure] = 'stadium'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer>
        <CssParameter name="fill">#33cc99</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[leisure]='track'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer>
        <CssParameter name="fill">#74dcba</CssParameter>
      </PolygonSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#888</CssParameter>
        <CssParameter name="stroke-width">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[leisure] = 'pitch'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer>
         <CssParameter name="fill">#8ad3af</CssParameter>
      </PolygonSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#888</CssParameter>
        <CssParameter name="stroke-width">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>

<Layer name="landcover" status="on" srs="&osm2pgsql_projection;">
    <StyleName>landcover</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,aeroway,amenity,landuse,leisure,man_made,military,"natural",power,tourism,name,highway,
       case when religion in ('christian','jewish') then religion else 'INT-generic'::text end as religion
       from &prefix;_polygon
       where landuse is not null
          or leisure is not null
          or aeroway in ('apron','aerodrome')
          or amenity in ('parking','university','college','school','hospital','kindergarten','grave_yard')
          or military in ('barracks','danger_area')
          or "natural" in ('field','beach','desert','heath','mud','wood','sand','scrub')
          or power in ('station','sub_station','generator')
          or tourism in ('attraction','camp_site','caravan_site','picnic_site','zoo')
          or highway in ('services','rest_area')
       order by z_order,way_area desc
      ) as leisure
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="landcover_line" status="on" srs="&osm2pgsql_projection;">
    <StyleName>landcover_line</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way
       from &prefix;_line
       where man_made='cutline'
      ) as leisure
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="sports_grounds" status="on" srs="&osm2pgsql_projection;">
    <StyleName>sports_grounds</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,leisure,
       case when leisure='pitch' then 2
            when leisure='track' then 1
            else 0 end as prio
       from &prefix;_polygon
       where leisure in ('sports_centre','stadium','pitch','track')
       order by z_order,prio,way_area desc
      ) as sports_grounds
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

