// generated by Fast Light User Interface Designer (fluid) version 1.0106

#include "ErrorDialog.H"

#include <FL/Fl_Pixmap.H>
static const char *idata_dialog[] = {
"48 48 408 2",
"  \tc None",
". \tc #5D5D72",
"+ \tc #615669",
"@ \tc #8B1C23",
"# \tc #9E0203",
"$ \tc #9C0506",
"% \tc #802C36",
"& \tc #5D5B70",
"* \tc #5D5C71",
"= \tc #941115",
"- \tc #C03132",
"; \tc #E06B6B",
"> \tc #DC6464",
", \tc #AE1D1E",
"\' \tc #812B35",
") \tc #753A47",
"! \tc #AC1A1B",
"~ \tc #E26F6F",
"{ \tc #D01515",
"] \tc #D42828",
"^ \tc #DE6666",
"/ \tc #A00707",
"( \tc #645265",
"_ \tc #5E5B6F",
": \tc #9B0809",
"< \tc #D86060",
"[ \tc #D52D2D",
"} \tc #CC0000",
"| \tc #DB4C4C",
"1 \tc #C33939",
"2 \tc #8A1F26",
"3 \tc #773542",
"4 \tc #B32A2A",
"5 \tc #E06363",
"6 \tc #CC0101",
"7 \tc #CF0F0F",
"8 \tc #E06868",
"9 \tc #A20B0C",
"0 \tc #684D5E",
"a \tc #5F596D",
"b \tc #9C0608",
"c \tc #DB6464",
"d \tc #D32424",
"e \tc #D94040",
"f \tc #CA3F3F",
"g \tc #8F181D",
"h \tc #7D313C",
"i \tc #B82E2F",
"j \tc #DF5E5E",
"k \tc #D25C5C",
"l \tc #CD1B1B",
"m \tc #CE0A0A",
"n \tc #DF6464",
"o \tc #A51112",
"p \tc #6C4757",
"q \tc #60576B",
"r \tc #9D0607",
"s \tc #DD6868",
"t \tc #D21E1E",
"u \tc #CE1919",
"v \tc #DAD4D4",
"w \tc #D69090",
"x \tc #D73636",
"y \tc #CD4343",
"z \tc #951115",
"A \tc #BC3232",
"B \tc #DE5858",
"C \tc #D58484",
"D \tc #DBDBDB",
"E \tc #DBDADA",
"F \tc #CF2A2A",
"G \tc #CD0505",
"H \tc #DE5F5F",
"I \tc #A71718",
"J \tc #71404F",
"K \tc #625468",
"L \tc #A00708",
"M \tc #DE6B6B",
"N \tc #D11919",
"O \tc #CE1F1F",
"P \tc #DBD8D8",
"Q \tc #DCDCDC",
"R \tc #D89E9E",
"S \tc #D52C2C",
"T \tc #D14949",
"U \tc #990A0D",
"V \tc #85252E",
"W \tc #C03738",
"X \tc #DC5151",
"Y \tc #D68D8D",
"Z \tc #D13737",
"` \tc #CC0202",
" .\tc #DD5757",
"..\tc #AE1C1D",
"+.\tc #763946",
"@.\tc #A00909",
"#.\tc #E06D6D",
"$.\tc #D01313",
"%.\tc #CF2626",
"&.\tc #DBD9D9",
"*.\tc #DDDDDD",
"=.\tc #DAACAC",
"-.\tc #D32323",
";.\tc #D44D4D",
">.\tc #9B0608",
",.\tc #5F5A6E",
"\'.\tc #892028",
").\tc #C33C3C",
"!.\tc #DB4B4B",
"~.\tc #D69595",
"{.\tc #D24444",
"].\tc #DC4E4E",
"^.\tc #B22223",
"/.\tc #7C313C",
"(.\tc #674F61",
"_.\tc #CF2D2D",
":.\tc #DCDBDB",
"<.\tc #DEDEDE",
"[.\tc #DBB8B8",
"}.\tc #D11A1A",
"|.\tc #D75050",
"1.\tc #61576A",
"2.\tc #8D1B21",
"3.\tc #C74141",
"4.\tc #DA4545",
"5.\tc #DFDFDF",
"6.\tc #D35151",
"7.\tc #DA4444",
"8.\tc #B92627",
"9.\tc #822932",
"0.\tc #6A4B5C",
"a.\tc #A40F10",
"b.\tc #E06C6C",
"c.\tc #CE0B0B",
"d.\tc #D03535",
"e.\tc #767676",
"f.\tc #ADADAD",
"g.\tc #DCC2C2",
"h.\tc #CC0505",
"i.\tc #D95151",
"j.\tc #9F0607",
"k.\tc #645365",
"l.\tc #90161C",
"m.\tc #CA4545",
"n.\tc #D93F3F",
"o.\tc #D8A6A6",
"p.\tc #0A0A0A",
"q.\tc #000000",
"r.\tc #818181",
"s.\tc #E0E0E0",
"t.\tc #D55F5F",
"u.\tc #D83B3B",
"v.\tc #BE2B2C",
"w.\tc #882129",
"x.\tc #A61314",
"y.\tc #E16B6B",
"z.\tc #CE0808",
"A.\tc #D03C3C",
"B.\tc #151515",
"C.\tc #8D8D8D",
"D.\tc #DECCCC",
"E.\tc #CD0A0A",
"F.\tc #CE0C0C",
"G.\tc #DA4F4F",
"H.\tc #674E60",
"I.\tc #941216",
"J.\tc #CF4A4A",
"K.\tc #D73838",
"L.\tc #D8ADAD",
"M.\tc #212121",
"N.\tc #989898",
"O.\tc #E1E1E1",
"P.\tc #D76D6D",
"Q.\tc #D63131",
"R.\tc #C32E2E",
"S.\tc #8E191F",
"T.\tc #6F4251",
"U.\tc #A81819",
"V.\tc #E16969",
"W.\tc #CD0606",
"X.\tc #D14444",
"Y.\tc #2D2D2D",
"Z.\tc #A4A4A4",
"`.\tc #E2E2E2",
" +\tc #E1D5D5",
".+\tc #CE1010",
"++\tc #CD0707",
"@+\tc #DA4C4C",
"#+\tc #A30D0E",
"$+\tc #6B4859",
"%+\tc #970D10",
"&+\tc #D25050",
"*+\tc #D63333",
"=+\tc #DAB6B6",
"-+\tc #383838",
";+\tc #B1B1B1",
">+\tc #E3E3E3",
",+\tc #D97B7B",
"\'+\tc #C73232",
")+\tc #951216",
"!+\tc #723E4C",
"~+\tc #AC1C1D",
"{+\tc #E06565",
"]+\tc #CD0404",
"^+\tc #D24D4D",
"/+\tc #434343",
"(+\tc #BDBDBD",
"_+\tc #E3DCDC",
":+\tc #CE1818",
"<+\tc #DA4646",
"[+\tc #704250",
"}+\tc #990A0C",
"|+\tc #D55454",
"1+\tc #CC0303",
"2+\tc #DBBDBD",
"3+\tc #4F4F4F",
"4+\tc #C8C8C8",
"5+\tc #E4E4E4",
"6+\tc #E5E5E5",
"7+\tc #DB8989",
"8+\tc #D32121",
"9+\tc #CC3535",
"0+\tc #980C0F",
"a+\tc #B02122",
"b+\tc #DF6161",
"c+\tc #D35656",
"d+\tc #5C5C5C",
"e+\tc #D5D5D5",
"f+\tc #E5E2E2",
"g+\tc #D02222",
"h+\tc #A91516",
"i+\tc #5E5A6E",
"j+\tc #9C0708",
"k+\tc #D75959",
"l+\tc #D42727",
"m+\tc #DCC3C3",
"n+\tc #686868",
"o+\tc #E6E6E6",
"p+\tc #DE9B9B",
"q+\tc #CE3636",
"r+\tc #9A0709",
"s+\tc #7B343F",
"t+\tc #B22626",
"u+\tc #DE5C5C",
"v+\tc #D45E5E",
"w+\tc #A5A5A5",
"x+\tc #696969",
"y+\tc #6F6F6F",
"z+\tc #E7E7E7",
"A+\tc #E7E6E6",
"B+\tc #D12F2F",
"C+\tc #AF191A",
"D+\tc #7A333F",
"E+\tc #5F586D",
"F+\tc #9C0607",
"G+\tc #D95D5D",
"H+\tc #CD0909",
"I+\tc #DCC8C8",
"J+\tc #D8D8D8",
"K+\tc #A7A7A7",
"L+\tc #C1C1C1",
"M+\tc #E8E8E8",
"N+\tc #E1AAAA",
"O+\tc #7E2E39",
"P+\tc #B82A2B",
"Q+\tc #D46666",
"R+\tc #242424",
"S+\tc #030303",
"T+\tc #9C9C9C",
"U+\tc #E9E9E9",
"V+\tc #D43D3D",
"W+\tc #D63030",
"X+\tc #B31B1B",
"Y+\tc #61566A",
"Z+\tc #9F0506",
"`+\tc #DB6161",
" @\tc #D11B1B",
".@\tc #CD0C0C",
"+@\tc #DCCDCD",
"@@\tc #4B4B4B",
"#@\tc #EAEAEA",
"$@\tc #E4B8B8",
"%@\tc #CF0D0D",
"&@\tc #D33737",
"*@\tc #9E0506",
"=@\tc #625467",
"-@\tc #BA2F2F",
";@\tc #D56F6F",
">@\tc #CFCFCF",
",@\tc #6E6E6E",
"\'@\tc #EBEBEB",
")@\tc #D64B4B",
"!@\tc #D42929",
"~@\tc #B81E1F",
"{@\tc #88232B",
"]@\tc #635467",
"^@\tc #9F0708",
"/@\tc #DD6363",
"(@\tc #D01616",
"_@\tc #DED3D3",
":@\tc #AEAEAE",
"<@\tc #555555",
"[@\tc #757575",
"}@\tc #E7C5C5",
"|@\tc #CD0303",
"1@\tc #CE0909",
"2@\tc #D43535",
"3@\tc #A10707",
"4@\tc #654F61",
"5@\tc #86242C",
"6@\tc #C03334",
"7@\tc #D67878",
"8@\tc #ECECEC",
"9@\tc #EDEDED",
"0@\tc #D85959",
"a@\tc #D32222",
"b@\tc #BD1E1F",
"c@\tc #655063",
"d@\tc #A10909",
"e@\tc #DE6565",
"f@\tc #D01212",
"g@\tc #CE1515",
"h@\tc #DED6D6",
"i@\tc #EAD1D1",
"j@\tc #D43232",
"k@\tc #A1090A",
"l@\tc #6A4A5A",
"m@\tc #892128",
"n@\tc #C03030",
"o@\tc #DA4848",
"p@\tc #D35555",
"q@\tc #EEEEEE",
"r@\tc #EEECEC",
"s@\tc #D43A3A",
"t@\tc #D21D1D",
"u@\tc #C11C1C",
"v@\tc #90171D",
"w@\tc #DB5C5C",
"x@\tc #D11818",
"y@\tc #D32F2F",
"z@\tc #9B0709",
"A@\tc #DA5B5B",
"B@\tc #D22020",
"C@\tc #D12D2D",
"D@\tc #9D0506",
"E@\tc #AF1E1F",
"F@\tc #DB5959",
"G@\tc #E06464",
"H@\tc #E06666",
"I@\tc #DF6060",
"J@\tc #DF5D5D",
"K@\tc #DE5B5B",
"L@\tc #DE5959",
"M@\tc #DD5656",
"N@\tc #DD5454",
"O@\tc #DD5353",
"P@\tc #DC5050",
"Q@\tc #DB4949",
"R@\tc #D94343",
"S@\tc #D94141",
"T@\tc #D83E3E",
"U@\tc #D83C3C",
"V@\tc #D73939",
"W@\tc #D73737",
"X@\tc #D63434",
"Y@\tc #D02B2B",
"Z@\tc #AC1112",
"`@\tc #812A34",
" #\tc #832831",
".#\tc #9D0405",
"+#\tc #9F0000",
"@#\tc #832730",
"##\tc #5B5B70",
"$#\tc #58586C",
"%#\tc #565669",
"&#\tc #535366",
"*#\tc #515163",
"=#\tc #4E4E60",
"-#\tc #4C4C5D",
";#\tc #4A4A5B",
">#\tc #484858",
",#\tc #464656",
"\'#\tc #454554",
")#\tc #434353",
"!#\tc #424251",
"~#\tc #424250",
"{#\tc #414150",
"]#\tc #444454",
"^#\tc #505063",
"/#\tc #555569",
"(#\tc #59596D",
"_#\tc #5C5C71",
":#\tc #5A5A6E",
"<#\tc #57576B",
"[#\tc #4F4F61",
"}#\tc #4D4D5F",
"|#\tc #49495A",
"1#\tc #484859",
"2#\tc #474758",
"3#\tc #474757",
"4#\tc #535365",
"5#\tc #555568",
"6#\tc #5A5A6F",
"7#\tc #545467",
"8#\tc #515164",
"9#\tc #505062",
"0#\tc #4E4E5F",
"a#\tc #545468",
". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . . . . . . . + @ # $ % & . . . . . . . . . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . . . . . . * = - ; > , \' . . . . . . . . . . . \
. . . . . . . . . . ",
". . . . . . . . . . . . . . . . . . . . ) ! ~ { ] ^ / ( . . . . . . . . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . . . . . _ : < [ } } | 1 2 . . . . . . . . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . . . . . 3 4 5 6 } } 7 8 9 0 . . . . . . . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . . . . a b c d } } } } e f g . . . . . . . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . . . . h i j } } k l } m n o p . . . . . . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . . . q r s t } u v w } } x y z . . . . . . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . . . \' A B } } C D E F } G H I J . . . . . . . \
. . . . . . . . . . ",
". . . . . . . . . . . . . . . . K L M N } O P D Q R } } S T U & . . . . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . . V W X } } Y D Q Q Q Z } `  ...+.. . . . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . ( @.#.$.} %.&.Q Q Q *.=.} } -.;.>.,.. . . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . \'.).!.} } ~.Q Q Q *.*.*.{.} } ].^./.. . . . . \
. . . . . . . . . . ",
". . . . . . . . . . . . . . (.9 #.7 } _.:.Q Q *.*.*.<.[.` } }.|.$ 1.. . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . 2.3.4.} } R Q Q *.*.*.<.<.5.6.} } 7.8.9.. . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . 0.a.b.c.} d.Q Q *.e.e.e.f.5.5.g.h.} $.i.j.k.. . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . l.m.n.} } o.Q *.*.p.q.q.r.5.5.s.t.} } u.v.w.. . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . p x.y.z.} A.Q *.*.<.B.q.q.C.5.s.s.D.E.} F.G.@.H.. . .\
 . . . . . . . . . ",
". . . . . . . . . . . . I.J.K.} 6 L.*.*.<.<.M.q.q.N.s.s.O.O.P.} } Q.R.S.. . .\
 . . . . . . . . . ",
". . . . . . . . . . . T.U.V.W.} X.*.*.<.<.<.Y.q.q.Z.s.O.O.`. +.+} ++@+#+$+. .\
 . . . . . . . . . ",
". . . . . . . . . . * %+&+*+} ` =+*.<.<.<.5.-+q.q.;+O.O.`.`.>+,+} } ] \'+)+. \
. . . . . . . . . . ",
". . . . . . . . . . !+~+{+]+} ^+*.<.<.<.5.5./+q.q.(+O.`.`.>+>+_+:+} ]+<+o [+.\
 . . . . . . . . . ",
". . . . . . . . . & }+|+[ } 1+2+<.<.<.5.5.5.3+q.q.4+`.`.>+>+5+6+7+} } 8+9+0+*\
 . . . . . . . . . ",
". . . . . . . . . +.a+b+` } c+<.<.<.5.5.5.s.d+q.q.e+`.>+>+5+6+6+f+g+} ` e h+)\
 . . . . . . . . . ",
". . . . . . . . i+j+k+l+} h.m+<.<.5.5.5.s.s.n+q.q.`.>+>+5+6+6+o+o+p+} } N q+r\
+i+. . . . . . . . ",
". . . . . . . . s+t+u+6 } v+<.<.5.5.5.s.s.O.w+x+y+>+>+5+6+6+o+o+z+A+B+} 6 K.C\
+D+. . . . . . . . ",
". . . . . . . E+F+G+8+} H+I+<.5.5.5.s.s.O.O.J+K+L+>+5+6+6+o+o+z+z+M+N+} } $.Z\
 r q . . . . . . . ",
". . . . . . . O+P+ .} } Q+<.5.5.5.s.s.O.O.Q R+q.S+T+6+6+o+o+z+z+M+U+U+V+} } W\
+X+\' . . . . . . . ",
". . . . . . Y+Z+`+ @} .@+@5.5.5.s.s.O.O.`.;+q.q.q.@@6+o+o+z+z+M+U+U+#@$@6 } %\
@&@*@=@. . . . . . ",
". . . . . . 9.-@X } } ;@5.5.5.s.s.O.O.`.`.>@p.q.q.,@o+o+z+z+M+U+U+#@#@\'@)@} \
} !@~@{@. . . . . . ",
". . . . . ]@^@/@(@} .+_@5.s.s.s.O.O.`.`.>+5+:@<@[@<.o+z+z+M+U+U+#@#@\'@\'@}@|\
@} 1@2@3@4@. . . . . ",
". . . . . 5@6@!.} } 7@5.s.s.s.O.O.`.`.>+5+5+6+6+o+o+z+z+M+U+U+#@#@\'@\'@8@9@0\
@} } a@b@2.. . . . . ",
". . . . c@d@e@f@} g@h@s.s.s.O.O.`.`.>+5+5+6+6+o+o+z+M+M+U+U+#@#@\'@\'@8@9@9@i\
@++} G j@k@l@. . . . ",
". . . . m@n@o@} } p@s.s.s.O.O.`.`.>+5+5+6+6+o+o+z+M+M+U+U+#@#@\'@\'@8@9@9@q@r\
@s@} } t@u@v@. . . . ",
". . . . F+w@x@} } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } }\
 } } G y@# . . . . ",
". . . . z@A@B@G } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } }\
 } ` F.C@D@. . . . ",
". . . . \' E@F@G@H@{+5 b+I@j J@K@L@B M@N@O@X P@].| !.Q@o@<+7.R@S@n.T@U@u.V@W@\
x X@W+Y@Z@`@. . . . ",
". . . . &  #.#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+\
#+#+#.#@#& . . . . ",
". . . . . . . . . ##$#%#&#*#=#-#;#>#,#\'#)#!#~#{#{#{#~#!#)#]#,#>#;#-#=#^#&#/#\
(#_#. . . . . . . . ",
". . . . . . . . . . . :#<#/#&#*#[#}#-#;#|#1#>#2#3#3#>#>#|#;#-#}#[#*#4#5#<###.\
 . . . . . . . . . ",
". . . . . . . . . . . . _#6#$#%#7#4#8#9#[#=#=#0#}#0#=#=#[#9#8#4#7#%#(###. . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . _###(#<#%#/#a#7#7#7#7#7#a#/#%#$#:###. . . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . . . . . . _#_#_#######_#_#. . . . . . . . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .\
 . . . . . . . . . ",
". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .\
 . . . . . . . . . "
};
static Fl_Pixmap image_dialog(idata_dialog);

inline void ErrorDialog::cb_detailsButton_i(Fl_Button*, void*) {
  toggle_details();
}
void ErrorDialog::cb_detailsButton(Fl_Button* o, void* v) {
  ((ErrorDialog*)(o->parent()->user_data()))->cb_detailsButton_i(o,v);
}

inline void ErrorDialog::cb_closeButton_i(Fl_Return_Button* o, void*) {
  o->window()->hide();
}
void ErrorDialog::cb_closeButton(Fl_Return_Button* o, void* v) {
  ((ErrorDialog*)(o->parent()->user_data()))->cb_closeButton_i(o,v);
}

ErrorDialog::ErrorDialog() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = errorDialog = new Fl_Double_Window(375, 290, "Error");
    w = o;
    o->user_data((void*)(this));
    { Fl_Box* o = new Fl_Box(30, 40, 50, 50);
      o->image(image_dialog);
    }
    { Fl_Box* o = errorBox = new Fl_Box(115, 30, 250, 60, "Could  not load File");
      o->labelfont(1);
      o->labelsize(16);
      o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
    }
    { Fl_Button* o = detailsButton = new Fl_Button(235, 95, 135, 25, "Details <<");
      o->callback((Fl_Callback*)cb_detailsButton);
    }
    { Fl_Return_Button* o = closeButton = new Fl_Return_Button(235, 260, 135, 25, "Close");
      o->callback((Fl_Callback*)cb_closeButton);
      w->hotspot(o);
    }
    errorDisplay = new Fl_Text_Display(5, 125, 365, 130);
    o->set_modal();
    o->end();
  }
  errorDisplay->buffer( textBuffer );
show_details = true;
}

ErrorDialog::~ErrorDialog() {
  delete errorDialog;
}

void ErrorDialog::show() {
  toggle_details();
errorDialog->show();
}

int ErrorDialog::shown() {
  return errorDialog->shown();
}

void ErrorDialog::error( const char* msg ) {
  errorBox->label( msg );
}

void ErrorDialog::details( const char* msg ) {
  textBuffer.text( msg );
}

void ErrorDialog::toggle_details() {
  if ( textBuffer.length() == 0 ) {
	errorDisplay->hide();
	closeButton->position( closeButton->x(), 125 );
	errorDialog->size( errorDialog->w(), 155 );
	detailsButton->hide();
	return;
} else {
	detailsButton->show();
}
if ( show_details ) {
	errorDisplay->hide();
	closeButton->position( closeButton->x(), 125 );
	errorDialog->size( errorDialog->w(), 155 );
	detailsButton->label( "Details >>" );
} else {
	errorDisplay->show();
	closeButton->position( closeButton->x(), 260 );
	errorDialog->size( errorDialog->w(), 290 );
	detailsButton->label( "Details <<" );
}
show_details = !show_details;
}
