/*!
* Datepicker for Bootstrap
*
* Original Idea: http://www.eyecon.ro/bootstrap-datepicker (Copyright 2012 Stefan Petre)
* Updated by AymKdn (http://kodono.info - https://github.com/Aymkdn/Datepicker-for-Bootstrap)
* Licensed under the Apache License v2.0
* http://www.apache.org/licenses/LICENSE-2.0
*
*/
.datepicker {
top: 0;
left: 0;
padding: 4px;
margin-top: 1px;
-webkit-border-radius: 4px;
-moz-border-radius: 4px;
border-radius: 4px;
/*.dow {
border-top: 1px solid #ddd !important;
}*/
}
.datepicker:before {
content: '';
display: inline-block;
border-left: 7px solid transparent;
border-right: 7px solid transparent;
border-bottom: 7px solid #ccc;
border-bottom-color: rgba(0, 0, 0, 0.2);
position: absolute;
top: -7px;
left: 6px;
}
.datepicker:after {
content: '';
display: inline-block;
border-left: 6px solid transparent;
border-right: 6px solid transparent;
border-bottom: 6px solid #ffffff;
position: absolute;
top: -6px;
left: 7px;
}
.datepicker > div {
display: none;
}
.datepicker table {
width: 100%;
margin: 0;
}
.datepicker td, .datepicker th {
text-align: center;
width: 20px;
height: 20px;
-webkit-border-radius: 4px;
-moz-border-radius: 4px;
border-radius: 4px;
}
.datepicker td.day:hover {
background: #eeeeee;
cursor: pointer;
}
.datepicker td.old, .datepicker td.new {
color: #999999;
}
.datepicker td.active, .datepicker td.active:hover {
background-color: #006dcc;
background-image: -moz-linear-gradient(top, #0088cc, #0044cc);
background-image: -ms-linear-gradient(top, #0088cc, #0044cc);
background-image: -webkit-gradient(linear, 0 0, 0 100%, from(#0088cc), to(#0044cc));
background-image: -webkit-linear-gradient(top, #0088cc, #0044cc);
background-image: -o-linear-gradient(top, #0088cc, #0044cc);
background-image: linear-gradient(top, #0088cc, #0044cc);
background-repeat: repeat-x;
filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#0088cc', endColorstr='#0044cc', GradientType=0);
border-color: #0044cc #0044cc #002a80;
border-color: rgba(0, 0, 0, 0.1) rgba(0, 0, 0, 0.1) rgba(0, 0, 0, 0.25);
filter: progid:DXImageTransform.Microsoft.gradient(enabled = false);
color: #fff;
text-shadow: 0 -1px 0 rgba(0, 0, 0, 0.25);
}
.datepicker td.active:hover,
.datepicker td.active:hover:hover,
.datepicker td.active:active,
.datepicker td.active:hover:active,
.datepicker td.active.active,
.datepicker td.active:hover.active,
.datepicker td.active.disabled,
.datepicker td.active:hover.disabled,
.datepicker td.active[disabled],
.datepicker td.active:hover[disabled] {
background-color: #0044cc;
}
.datepicker td.active:active,
.datepicker td.active:hover:active,
.datepicker td.active.active,
.datepicker td.active:hover.active {
background-color: #003399 \9;
}
.datepicker td span {
display: block;
width: 47px;
height: 54px;
line-height: 54px;
float: left;
margin: 2px;
cursor: pointer;
-webkit-border-radius: 4px;
-moz-border-radius: 4px;
border-radius: 4px;
}
.datepicker td span:hover {
background: #eeeeee;
}
.datepicker td span.active {
background-color: #006dcc;
background-image: -moz-linear-gradient(top, #0088cc, #0044cc);
background-image: -ms-linear-gradient(top, #0088cc, #0044cc);
background-image: -webkit-gradient(linear, 0 0, 0 100%, from(#0088cc), to(#0044cc));
background-image: -webkit-linear-gradient(top, #0088cc, #0044cc);
background-image: -o-linear-gradient(top, #0088cc, #0044cc);
background-image: linear-gradient(top, #0088cc, #0044cc);
background-repeat: repeat-x;
filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#0088cc', endColorstr='#0044cc', GradientType=0);
border-color: #0044cc #0044cc #002a80;
border-color: rgba(0, 0, 0, 0.1) rgba(0, 0, 0, 0.1) rgba(0, 0, 0, 0.25);
filter: progid:DXImageTransform.Microsoft.gradient(enabled = false);
color: #fff;
text-shadow: 0 -1px 0 rgba(0, 0, 0, 0.25);
}
.datepicker td span.active:hover,
.datepicker td span.active:active,
.datepicker td span.active.active,
.datepicker td span.active.disabled,
.datepicker td span.active[disabled] {
background-color: #0044cc;
}
.datepicker td span.active:active, .datepicker td span.active.active {
background-color: #003399 \9;
}
.datepicker td span.old {
color: #999999;
}
.datepicker th.switch {
width: 145px;
}
.datepicker thead tr:first-child th {
cursor: pointer;
}
.datepicker thead tr:first-child th:hover {
background: #eeeeee;
}
.input-append.date .add-on i, .input-prepend.date .add-on i {
display: block;
cursor: pointer;
width: 16px;
height: 16px;
}
.dropdown-menu.datepicker { max-width:220px }
