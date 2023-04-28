#ifndef HZ_DATA_TABLES_H
#define HZ_DATA_TABLES_H

typedef enum {
    HZ_LANGUAGE_DFLT,
    HZ_LANGUAGE_ABAZA, /* Abaza */ 
    HZ_LANGUAGE_ABKHAZIAN, /* Abkhazian */ 
    HZ_LANGUAGE_ACHOLI, /* Acholi */ 
    HZ_LANGUAGE_ACHI, /* Achi */ 
    HZ_LANGUAGE_ADYGHE, /* Adyghe */ 
    HZ_LANGUAGE_AFRIKAANS, /* Afrikaans */ 
    HZ_LANGUAGE_AFAR, /* Afar */ 
    HZ_LANGUAGE_AGAW, /* Agaw */ 
    HZ_LANGUAGE_AITON, /* Aiton */ 
    HZ_LANGUAGE_AKAN, /* Akan */ 
    HZ_LANGUAGE_BATAK_ANGKOLA, /* Batak Angkola */ 
    HZ_LANGUAGE_ALSATIAN, /* Alsatian */ 
    HZ_LANGUAGE_ALTAI, /* Altai */ 
    HZ_LANGUAGE_AMHARIC, /* Amharic */ 
    HZ_LANGUAGE_ANGLO_SAXON, /* Anglo-Saxon */ 
    HZ_LANGUAGE_PHONETIC_TRANSCRIPTION_AMERICANIST_CONVENTIONS, /* Phonetic transcription-Americanist conventions */ 
    HZ_LANGUAGE_ARABIC, /* Arabic */ 
    HZ_LANGUAGE_ARAGONESE, /* Aragonese */ 
    HZ_LANGUAGE_AARI, /* Aari */ 
    HZ_LANGUAGE_RAKHINE, /* Rakhine */ 
    HZ_LANGUAGE_ASSAMESE, /* Assamese */ 
    HZ_LANGUAGE_ASTURIAN, /* Asturian */ 
    HZ_LANGUAGE_ATHAPASKAN_LANGUAGES, /* Athapaskan languages */ 
    HZ_LANGUAGE_AVAR, /* Avar */ 
    HZ_LANGUAGE_AWADHI, /* Awadhi */ 
    HZ_LANGUAGE_AYMARA, /* Aymara */ 
    HZ_LANGUAGE_TORKI, /* Torki */ 
    HZ_LANGUAGE_AZERBAIJANI, /* Azerbaijani */ 
    HZ_LANGUAGE_BADAGA, /* Badaga */ 
    HZ_LANGUAGE_BANDA, /* Banda */ 
    HZ_LANGUAGE_BAGHELKHANDI, /* Baghelkhandi */ 
    HZ_LANGUAGE_BALKAR, /* Balkar */ 
    HZ_LANGUAGE_BALINESE, /* Balinese */ 
    HZ_LANGUAGE_BAVARIAN, /* Bavarian */ 
    HZ_LANGUAGE_BAULE, /* Baule */ 
    HZ_LANGUAGE_BATAK_TOBA, /* Batak Toba */ 
    HZ_LANGUAGE_BERBER, /* Berber */ 
    HZ_LANGUAGE_BENCH, /* Bench */ 
    HZ_LANGUAGE_BIBLE_CREE, /* Bible Cree */ 
    HZ_LANGUAGE_BANDJALANG, /* Bandjalang */ 
    HZ_LANGUAGE_BELARUSSIAN, /* Belarussian */ 
    HZ_LANGUAGE_BEMBA, /* Bemba */ 
    HZ_LANGUAGE_BENGALI, /* Bengali */ 
    HZ_LANGUAGE_HARYANVI, /* Haryanvi */ 
    HZ_LANGUAGE_BAGRI, /* Bagri */ 
    HZ_LANGUAGE_BULGARIAN, /* Bulgarian */ 
    HZ_LANGUAGE_BHILI, /* Bhili */ 
    HZ_LANGUAGE_BHOJPURI, /* Bhojpuri */ 
    HZ_LANGUAGE_BIKOL, /* Bikol */ 
    HZ_LANGUAGE_BILEN, /* Bilen */ 
    HZ_LANGUAGE_BISLAMA, /* Bislama */ 
    HZ_LANGUAGE_KANAUJI, /* Kanauji */ 
    HZ_LANGUAGE_BLACKFOOT, /* Blackfoot */ 
    HZ_LANGUAGE_BALUCHI, /* Baluchi */ 
    HZ_LANGUAGE_PAO_KAREN, /* Pao Karen */ 
    HZ_LANGUAGE_BALANTE, /* Balante */ 
    HZ_LANGUAGE_BALTI, /* Balti */ 
    HZ_LANGUAGE_BAMBARA_BAMANANKAN, /* Bambara (Bamanankan) */ 
    HZ_LANGUAGE_BAMILEKE, /* Bamileke */ 
    HZ_LANGUAGE_BOSNIAN, /* Bosnian */ 
    HZ_LANGUAGE_BISHNUPRIYA_MANIPURI, /* Bishnupriya Manipuri */ 
    HZ_LANGUAGE_BRETON, /* Breton */ 
    HZ_LANGUAGE_BRAHUI, /* Brahui */ 
    HZ_LANGUAGE_BRAJ_BHASHA, /* Braj Bhasha */ 
    HZ_LANGUAGE_BURMESE, /* Burmese */ 
    HZ_LANGUAGE_BODO, /* Bodo */ 
    HZ_LANGUAGE_BASHKIR, /* Bashkir */ 
    HZ_LANGUAGE_BURUSHASKI, /* Burushaski */ 
    HZ_LANGUAGE_BATAK_DAIRI_PAKPAK, /* Batak Dairi (Pakpak) */ 
    HZ_LANGUAGE_BETI, /* Beti */ 
    HZ_LANGUAGE_BATAK_LANGUAGES, /* Batak languages */ 
    HZ_LANGUAGE_BATAK_MANDAILING, /* Batak Mandailing */ 
    HZ_LANGUAGE_BATAK_SIMALUNGUN, /* Batak Simalungun */ 
    HZ_LANGUAGE_BATAK_KARO, /* Batak Karo */ 
    HZ_LANGUAGE_BATAK_ALAS_KLUET, /* Batak Alas-Kluet */ 
    HZ_LANGUAGE_BUGIS, /* Bugis */ 
    HZ_LANGUAGE_MEDUMBA, /* Medumba */ 
    HZ_LANGUAGE_KAQCHIKEL, /* Kaqchikel */ 
    HZ_LANGUAGE_CATALAN, /* Catalan */ 
    HZ_LANGUAGE_ZAMBOANGA_CHAVACANO, /* Zamboanga Chavacano */ 
    HZ_LANGUAGE_CHINANTEC, /* Chinantec */ 
    HZ_LANGUAGE_CEBUANO, /* Cebuano */ 
    HZ_LANGUAGE_CHIGA, /* Chiga */ 
    HZ_LANGUAGE_CHAMORRO, /* Chamorro */ 
    HZ_LANGUAGE_CHECHEN, /* Chechen */ 
    HZ_LANGUAGE_CHAHA_GURAGE, /* Chaha Gurage */ 
    HZ_LANGUAGE_CHATTISGARHI, /* Chattisgarhi */ 
    HZ_LANGUAGE_CHICHEWA_CHEWA_NYANJA, /* Chichewa (Chewa, Nyanja) */ 
    HZ_LANGUAGE_CHUKCHI, /* Chukchi */ 
    HZ_LANGUAGE_CHUUKESE, /* Chuukese */ 
    HZ_LANGUAGE_CHOCTAW, /* Choctaw */ 
    HZ_LANGUAGE_CHIPEWYAN, /* Chipewyan */ 
    HZ_LANGUAGE_CHEROKEE, /* Cherokee */ 
    HZ_LANGUAGE_CHUVASH, /* Chuvash */ 
    HZ_LANGUAGE_CHEYENNE, /* Cheyenne */ 
    HZ_LANGUAGE_WESTERN_CHAM, /* Western Cham */ 
    HZ_LANGUAGE_EASTERN_CHAM, /* Eastern Cham */ 
    HZ_LANGUAGE_COMORIAN, /* Comorian */ 
    HZ_LANGUAGE_COPTIC, /* Coptic */ 
    HZ_LANGUAGE_CORNISH, /* Cornish */ 
    HZ_LANGUAGE_CORSICAN, /* Corsican */ 
    HZ_LANGUAGE_CREOLES, /* Creoles */ 
    HZ_LANGUAGE_CREE, /* Cree */ 
    HZ_LANGUAGE_CARRIER, /* Carrier */ 
    HZ_LANGUAGE_CRIMEAN_TATAR, /* Crimean Tatar */ 
    HZ_LANGUAGE_KASHUBIAN, /* Kashubian */ 
    HZ_LANGUAGE_CHURCH_SLAVONIC, /* Church Slavonic */ 
    HZ_LANGUAGE_CZECH, /* Czech */ 
    HZ_LANGUAGE_CHITTAGONIAN, /* Chittagonian */ 
    HZ_LANGUAGE_SAN_BLAS_KUNA, /* San Blas Kuna */ 
    HZ_LANGUAGE_DAGBANI, /* Dagbani */ 
    HZ_LANGUAGE_DANISH, /* Danish */ 
    HZ_LANGUAGE_DARGWA, /* Dargwa */ 
    HZ_LANGUAGE_DAYI, /* Dayi */ 
    HZ_LANGUAGE_WOODS_CREE, /* Woods Cree */ 
    HZ_LANGUAGE_GERMAN, /* German */ 
    HZ_LANGUAGE_DOGRI_INDIVIDUAL_LANGUAGE, /* Dogri (individual language) */ 
    HZ_LANGUAGE_DOGRI_MACROLANGUAGE, /* Dogri (macrolanguage) */ 
    HZ_LANGUAGE_DHANGU, /* Dhangu */ 
    HZ_LANGUAGE_DIVEHI_DHIVEHI_MALDIVIAN, /* Divehi (Dhivehi, Maldivian) */ 
    HZ_LANGUAGE_DIMLI, /* Dimli */ 
    HZ_LANGUAGE_ZARMA, /* Zarma */ 
    HZ_LANGUAGE_DJAMBARRPUYNGU, /* Djambarrpuyngu */ 
    HZ_LANGUAGE_DANGME, /* Dangme */ 
    HZ_LANGUAGE_DAN, /* Dan */ 
    HZ_LANGUAGE_DINKA, /* Dinka */ 
    HZ_LANGUAGE_DARI, /* Dari */ 
    HZ_LANGUAGE_DHUWAL, /* Dhuwal */ 
    HZ_LANGUAGE_DUNGAN, /* Dungan */ 
    HZ_LANGUAGE_DZONGKHA, /* Dzongkha */ 
    HZ_LANGUAGE_EBIRA, /* Ebira */ 
    HZ_LANGUAGE_EASTERN_CREE, /* Eastern Cree */ 
    HZ_LANGUAGE_EDO, /* Edo */ 
    HZ_LANGUAGE_EFIK, /* Efik */ 
    HZ_LANGUAGE_GREEK, /* Greek */ 
    HZ_LANGUAGE_EASTERN_MANINKAKAN, /* Eastern Maninkakan */ 
    HZ_LANGUAGE_ENGLISH, /* English */ 
    HZ_LANGUAGE_ERZYA, /* Erzya */ 
    HZ_LANGUAGE_SPANISH, /* Spanish */ 
    HZ_LANGUAGE_CENTRAL_YUPIK, /* Central Yupik */ 
    HZ_LANGUAGE_ESTONIAN, /* Estonian */ 
    HZ_LANGUAGE_BASQUE, /* Basque */ 
    HZ_LANGUAGE_EVENKI, /* Evenki */ 
    HZ_LANGUAGE_EVEN, /* Even */ 
    HZ_LANGUAGE_EWE, /* Ewe */ 
    HZ_LANGUAGE_FRENCH_ANTILLEAN, /* French Antillean */ 
    HZ_LANGUAGE_FANG, /* Fang */ 
    HZ_LANGUAGE_PERSIAN, /* Persian */ 
    HZ_LANGUAGE_FANTI, /* Fanti */ 
    HZ_LANGUAGE_FINNISH, /* Finnish */ 
    HZ_LANGUAGE_FIJIAN, /* Fijian */ 
    HZ_LANGUAGE_DUTCH_FLEMISH, /* Dutch (Flemish) */ 
    HZ_LANGUAGE_FEFE, /* Fefe */ 
    HZ_LANGUAGE_FOREST_ENETS, /* Forest Enets */ 
    HZ_LANGUAGE_FON, /* Fon */ 
    HZ_LANGUAGE_FAROESE, /* Faroese */ 
    HZ_LANGUAGE_FRENCH, /* French */ 
    HZ_LANGUAGE_CAJUN_FRENCH, /* Cajun French */ 
    HZ_LANGUAGE_FRISIAN, /* Frisian */ 
    HZ_LANGUAGE_FRIULIAN, /* Friulian */ 
    HZ_LANGUAGE_ARPITAN, /* Arpitan */ 
    HZ_LANGUAGE_FUTA, /* Futa */ 
    HZ_LANGUAGE_FULAH, /* Fulah */ 
    HZ_LANGUAGE_NIGERIAN_FULFULDE, /* Nigerian Fulfulde */ 
    HZ_LANGUAGE_GA, /* Ga */ 
    HZ_LANGUAGE_SCOTTISH_GAELIC_GAELIC, /* Scottish Gaelic (Gaelic) */ 
    HZ_LANGUAGE_GAGAUZ, /* Gagauz */ 
    HZ_LANGUAGE_GALICIAN, /* Galician */ 
    HZ_LANGUAGE_GARSHUNI, /* Garshuni */ 
    HZ_LANGUAGE_GARHWALI, /* Garhwali */ 
    HZ_LANGUAGE_GEEZ, /* Geez */ 
    HZ_LANGUAGE_GITHABUL, /* Githabul */ 
    HZ_LANGUAGE_GILYAK, /* Gilyak */ 
    HZ_LANGUAGE_KIRIBATI_GILBERTESE, /* Kiribati (Gilbertese) */ 
    HZ_LANGUAGE_KPELLE_GUINEA, /* Kpelle (Guinea) */ 
    HZ_LANGUAGE_GILAKI, /* Gilaki */ 
    HZ_LANGUAGE_GUMUZ, /* Gumuz */ 
    HZ_LANGUAGE_GUMATJ, /* Gumatj */ 
    HZ_LANGUAGE_GOGO, /* Gogo */ 
    HZ_LANGUAGE_GONDI, /* Gondi */ 
    HZ_LANGUAGE_GREENLANDIC, /* Greenlandic */ 
    HZ_LANGUAGE_GARO, /* Garo */ 
    HZ_LANGUAGE_GUARANI, /* Guarani */ 
    HZ_LANGUAGE_WAYUU, /* Wayuu */ 
    HZ_LANGUAGE_GUPAPUYNGU, /* Gupapuyngu */ 
    HZ_LANGUAGE_GUJARATI, /* Gujarati */ 
    HZ_LANGUAGE_GUSII, /* Gusii */ 
    HZ_LANGUAGE_HAITIAN_HAITIAN_CREOLE, /* Haitian (Haitian Creole) */ 
    HZ_LANGUAGE_HALAM_FALAM_CHIN, /* Halam (Falam Chin) */ 
    HZ_LANGUAGE_HARAUTI, /* Harauti */ 
    HZ_LANGUAGE_HAUSA, /* Hausa */ 
    HZ_LANGUAGE_HAWAIIAN, /* Hawaiian */ 
    HZ_LANGUAGE_HAYA, /* Haya */ 
    HZ_LANGUAGE_HAZARAGI, /* Hazaragi */ 
    HZ_LANGUAGE_HAMMER_BANNA, /* Hammer-Banna */ 
    HZ_LANGUAGE_HERERO, /* Herero */ 
    HZ_LANGUAGE_HILIGAYNON, /* Hiligaynon */ 
    HZ_LANGUAGE_HINDI, /* Hindi */ 
    HZ_LANGUAGE_HIGH_MARI, /* High Mari */ 
    HZ_LANGUAGE_HMONG, /* Hmong */ 
    HZ_LANGUAGE_HIRI_MOTU, /* Hiri Motu */ 
    HZ_LANGUAGE_HINDKO, /* Hindko */ 
    HZ_LANGUAGE_HO, /* Ho */ 
    HZ_LANGUAGE_HARARI, /* Harari */ 
    HZ_LANGUAGE_CROATIAN, /* Croatian */ 
    HZ_LANGUAGE_HUNGARIAN, /* Hungarian */ 
    HZ_LANGUAGE_ARMENIAN, /* Armenian */ 
    HZ_LANGUAGE_ARMENIAN_EAST, /* Armenian East */ 
    HZ_LANGUAGE_IBAN, /* Iban */ 
    HZ_LANGUAGE_IBIBIO, /* Ibibio */ 
    HZ_LANGUAGE_IGBO, /* Igbo */ 
    HZ_LANGUAGE_IDO, /* Ido */ 
    HZ_LANGUAGE_IJO_LANGUAGES, /* Ijo languages */ 
    HZ_LANGUAGE_INTERLINGUE, /* Interlingue */ 
    HZ_LANGUAGE_ILOKANO, /* Ilokano */ 
    HZ_LANGUAGE_INTERLINGUA, /* Interlingua */ 
    HZ_LANGUAGE_INDONESIAN, /* Indonesian */ 
    HZ_LANGUAGE_INGUSH, /* Ingush */ 
    HZ_LANGUAGE_INUKTITUT, /* Inuktitut */ 
    HZ_LANGUAGE_INUPIAT, /* Inupiat */ 
    HZ_LANGUAGE_PHONETIC_TRANSCRIPTION_IPA_CONVENTIONS, /* Phonetic transcription-IPA conventions */ 
    HZ_LANGUAGE_IRISH, /* Irish */ 
    HZ_LANGUAGE_IRISH_TRADITIONAL, /* Irish Traditional */ 
    HZ_LANGUAGE_ICELANDIC, /* Icelandic */ 
    HZ_LANGUAGE_INARI_SAMI, /* Inari Sami */ 
    HZ_LANGUAGE_ITALIAN, /* Italian */ 
    HZ_LANGUAGE_HEBREW, /* Hebrew */ 
    HZ_LANGUAGE_JAMAICAN_CREOLE, /* Jamaican Creole */ 
    HZ_LANGUAGE_JAPANESE, /* Japanese */ 
    HZ_LANGUAGE_JAVANESE, /* Javanese */ 
    HZ_LANGUAGE_LOJBAN, /* Lojban */ 
    HZ_LANGUAGE_KRYMCHAK, /* Krymchak */ 
    HZ_LANGUAGE_YIDDISH, /* Yiddish */ 
    HZ_LANGUAGE_LADINO, /* Ladino */ 
    HZ_LANGUAGE_JULA, /* Jula */ 
    HZ_LANGUAGE_KABARDIAN, /* Kabardian */ 
    HZ_LANGUAGE_KABYLE, /* Kabyle */ 
    HZ_LANGUAGE_KACHCHI, /* Kachchi */ 
    HZ_LANGUAGE_KALENJIN, /* Kalenjin */ 
    HZ_LANGUAGE_KANNADA, /* Kannada */ 
    HZ_LANGUAGE_KARACHAY, /* Karachay */ 
    HZ_LANGUAGE_GEORGIAN, /* Georgian */ 
    HZ_LANGUAGE_KAZAKH, /* Kazakh */ 
    HZ_LANGUAGE_MAKONDE, /* Makonde */ 
    HZ_LANGUAGE_KABUVERDIANU_CRIOULO, /* Kabuverdianu (Crioulo) */ 
    HZ_LANGUAGE_KEBENA, /* Kebena */ 
    HZ_LANGUAGE_KEKCHI, /* Kekchi */ 
    HZ_LANGUAGE_KHUTSURI_GEORGIAN, /* Khutsuri Georgian */ 
    HZ_LANGUAGE_KHAKASS, /* Khakass */ 
    HZ_LANGUAGE_KHANTY_KAZIM, /* Khanty-Kazim */ 
    HZ_LANGUAGE_KHMER, /* Khmer */ 
    HZ_LANGUAGE_KHANTY_SHURISHKAR, /* Khanty-Shurishkar */ 
    HZ_LANGUAGE_KHAMTI_SHAN, /* Khamti Shan */ 
    HZ_LANGUAGE_KHANTY_VAKHI, /* Khanty-Vakhi */ 
    HZ_LANGUAGE_KHOWAR, /* Khowar */ 
    HZ_LANGUAGE_KIKUYU_GIKUYU, /* Kikuyu (Gikuyu) */ 
    HZ_LANGUAGE_KIRGHIZ_KYRGYZ, /* Kirghiz (Kyrgyz) */ 
    HZ_LANGUAGE_KISII, /* Kisii */ 
    HZ_LANGUAGE_KIRMANJKI, /* Kirmanjki */ 
    HZ_LANGUAGE_SOUTHERN_KIWAI, /* Southern Kiwai */ 
    HZ_LANGUAGE_EASTERN_PWO_KAREN, /* Eastern Pwo Karen */ 
    HZ_LANGUAGE_BUMTHANGKHA, /* Bumthangkha */ 
    HZ_LANGUAGE_KOKNI, /* Kokni */ 
    HZ_LANGUAGE_KALMYK, /* Kalmyk */ 
    HZ_LANGUAGE_KAMBA, /* Kamba */ 
    HZ_LANGUAGE_KUMAONI, /* Kumaoni */ 
    HZ_LANGUAGE_KOMO, /* Komo */ 
    HZ_LANGUAGE_KOMSO, /* Komso */ 
    HZ_LANGUAGE_KHORASANI_TURKIC, /* Khorasani Turkic */ 
    HZ_LANGUAGE_KANURI, /* Kanuri */ 
    HZ_LANGUAGE_KODAGU, /* Kodagu */ 
    HZ_LANGUAGE_KOREAN_OLD_HANGUL, /* Korean Old Hangul */ 
    HZ_LANGUAGE_KONKANI, /* Konkani */ 
    HZ_LANGUAGE_KOMI, /* Komi */ 
    HZ_LANGUAGE_KIKONGO, /* Kikongo */ 
    HZ_LANGUAGE_KONGO, /* Kongo */ 
    HZ_LANGUAGE_KOMI_PERMYAK, /* Komi-Permyak */ 
    HZ_LANGUAGE_KOREAN, /* Korean */ 
    HZ_LANGUAGE_KOSRAEAN, /* Kosraean */ 
    HZ_LANGUAGE_KOMI_ZYRIAN, /* Komi-Zyrian */ 
    HZ_LANGUAGE_KPELLE, /* Kpelle */ 
    HZ_LANGUAGE_KRIO, /* Krio */ 
    HZ_LANGUAGE_KARAKALPAK, /* Karakalpak */ 
    HZ_LANGUAGE_KARELIAN, /* Karelian */ 
    HZ_LANGUAGE_KARAIM, /* Karaim */ 
    HZ_LANGUAGE_KAREN, /* Karen */ 
    HZ_LANGUAGE_KOORETE, /* Koorete */ 
    HZ_LANGUAGE_KASHMIRI, /* Kashmiri */ 
    HZ_LANGUAGE_RIPUARIAN, /* Ripuarian */ 
    HZ_LANGUAGE_KHASI, /* Khasi */ 
    HZ_LANGUAGE_KILDIN_SAMI, /* Kildin Sami */ 
    HZ_LANGUAGE_SGAW_KAREN, /* Sgaw Karen */ 
    HZ_LANGUAGE_KUANYAMA, /* Kuanyama */ 
    HZ_LANGUAGE_KUI, /* Kui */ 
    HZ_LANGUAGE_KULVI, /* Kulvi */ 
    HZ_LANGUAGE_KUMYK, /* Kumyk */ 
    HZ_LANGUAGE_KURDISH, /* Kurdish */ 
    HZ_LANGUAGE_KURUKH, /* Kurukh */ 
    HZ_LANGUAGE_KUY, /* Kuy */ 
    HZ_LANGUAGE_KORYAK, /* Koryak */ 
    HZ_LANGUAGE_WESTERN_KAYAH, /* Western Kayah */ 
    HZ_LANGUAGE_LADIN, /* Ladin */ 
    HZ_LANGUAGE_LAHULI, /* Lahuli */ 
    HZ_LANGUAGE_LAK, /* Lak */ 
    HZ_LANGUAGE_LAMBANI, /* Lambani */ 
    HZ_LANGUAGE_LAO, /* Lao */ 
    HZ_LANGUAGE_LATIN, /* Latin */ 
    HZ_LANGUAGE_LAZ, /* Laz */ 
    HZ_LANGUAGE_L_CREE, /* L-Cree */ 
    HZ_LANGUAGE_LADAKHI, /* Ladakhi */ 
    HZ_LANGUAGE_LEZGI, /* Lezgi */ 
    HZ_LANGUAGE_LIGURIAN, /* Ligurian */ 
    HZ_LANGUAGE_LIMBURGISH, /* Limburgish */ 
    HZ_LANGUAGE_LINGALA, /* Lingala */ 
    HZ_LANGUAGE_LISU, /* Lisu */ 
    HZ_LANGUAGE_LAMPUNG, /* Lampung */ 
    HZ_LANGUAGE_LAKI, /* Laki */ 
    HZ_LANGUAGE_LOW_MARI, /* Low Mari */ 
    HZ_LANGUAGE_LIMBU, /* Limbu */ 
    HZ_LANGUAGE_LOMBARD, /* Lombard */ 
    HZ_LANGUAGE_LOMWE, /* Lomwe */ 
    HZ_LANGUAGE_LOMA, /* Loma */ 
    HZ_LANGUAGE_LURI, /* Luri */ 
    HZ_LANGUAGE_LOWER_SORBIAN, /* Lower Sorbian */ 
    HZ_LANGUAGE_LULE_SAMI, /* Lule Sami */ 
    HZ_LANGUAGE_LITHUANIAN, /* Lithuanian */ 
    HZ_LANGUAGE_LUXEMBOURGISH, /* Luxembourgish */ 
    HZ_LANGUAGE_LUBA_LULUA, /* Luba-Lulua */ 
    HZ_LANGUAGE_LUBA_KATANGA, /* Luba-Katanga */ 
    HZ_LANGUAGE_GANDA, /* Ganda */ 
    HZ_LANGUAGE_LUYIA, /* Luyia */ 
    HZ_LANGUAGE_LUO, /* Luo */ 
    HZ_LANGUAGE_LATVIAN, /* Latvian */ 
    HZ_LANGUAGE_MADURA, /* Madura */ 
    HZ_LANGUAGE_MAGAHI, /* Magahi */ 
    HZ_LANGUAGE_MARSHALLESE, /* Marshallese */ 
    HZ_LANGUAGE_MAJANG, /* Majang */ 
    HZ_LANGUAGE_MAKHUWA, /* Makhuwa */ 
    HZ_LANGUAGE_MALAYALAM, /* Malayalam */ 
    HZ_LANGUAGE_MAM, /* Mam */ 
    HZ_LANGUAGE_MANSI, /* Mansi */ 
    HZ_LANGUAGE_MAPUDUNGUN, /* Mapudungun */ 
    HZ_LANGUAGE_MARATHI, /* Marathi */ 
    HZ_LANGUAGE_MARWARI, /* Marwari */ 
    HZ_LANGUAGE_MBUNDU, /* Mbundu */ 
    HZ_LANGUAGE_MBO, /* Mbo */ 
    HZ_LANGUAGE_MANCHU, /* Manchu */ 
    HZ_LANGUAGE_MOOSE_CREE, /* Moose Cree */ 
    HZ_LANGUAGE_MENDE, /* Mende */ 
    HZ_LANGUAGE_MANDAR, /* Mandar */ 
    HZ_LANGUAGE_MEEN, /* Meen */ 
    HZ_LANGUAGE_MERU, /* Meru */ 
    HZ_LANGUAGE_PATTANI_MALAY, /* Pattani Malay */ 
    HZ_LANGUAGE_MORISYEN, /* Morisyen */ 
    HZ_LANGUAGE_MINANGKABAU, /* Minangkabau */ 
    HZ_LANGUAGE_MIZO, /* Mizo */ 
    HZ_LANGUAGE_MACEDONIAN, /* Macedonian */ 
    HZ_LANGUAGE_MAKASAR, /* Makasar */ 
    HZ_LANGUAGE_KITUBA, /* Kituba */ 
    HZ_LANGUAGE_MALE, /* Male */ 
    HZ_LANGUAGE_MALAGASY, /* Malagasy */ 
    HZ_LANGUAGE_MALINKE, /* Malinke */ 
    HZ_LANGUAGE_MALAYALAM_REFORMED, /* Malayalam Reformed */ 
    HZ_LANGUAGE_MALAY, /* Malay */ 
    HZ_LANGUAGE_MANDINKA, /* Mandinka */ 
    HZ_LANGUAGE_MONGOLIAN, /* Mongolian */ 
    HZ_LANGUAGE_MANIPURI, /* Manipuri */ 
    HZ_LANGUAGE_MANINKA, /* Maninka */ 
    HZ_LANGUAGE_MANX, /* Manx */ 
    HZ_LANGUAGE_MOHAWK, /* Mohawk */ 
    HZ_LANGUAGE_MOKSHA, /* Moksha */ 
    HZ_LANGUAGE_MOLDAVIAN, /* Moldavian */ 
    HZ_LANGUAGE_MON, /* Mon */ 
    HZ_LANGUAGE_MOROCCAN, /* Moroccan */ 
    HZ_LANGUAGE_MOSSI, /* Mossi */ 
    HZ_LANGUAGE_MAORI, /* Maori */ 
    HZ_LANGUAGE_MAITHILI, /* Maithili */ 
    HZ_LANGUAGE_MALTESE, /* Maltese */ 
    HZ_LANGUAGE_MUNDARI, /* Mundari */ 
    HZ_LANGUAGE_MUSCOGEE, /* Muscogee */ 
    HZ_LANGUAGE_MIRANDESE, /* Mirandese */ 
    HZ_LANGUAGE_HMONG_DAW, /* Hmong Daw */ 
    HZ_LANGUAGE_MAYAN, /* Mayan */ 
    HZ_LANGUAGE_MAZANDERANI, /* Mazanderani */ 
    HZ_LANGUAGE_NAGA_ASSAMESE, /* Naga-Assamese */ 
    HZ_LANGUAGE_NAHUATL, /* Nahuatl */ 
    HZ_LANGUAGE_NANAI, /* Nanai */ 
    HZ_LANGUAGE_NEAPOLITAN, /* Neapolitan */ 
    HZ_LANGUAGE_NASKAPI, /* Naskapi */ 
    HZ_LANGUAGE_NAURUAN, /* Nauruan */ 
    HZ_LANGUAGE_NAVAJO, /* Navajo */ 
    HZ_LANGUAGE_N_CREE, /* N-Cree */ 
    HZ_LANGUAGE_NDEBELE, /* Ndebele */ 
    HZ_LANGUAGE_NDAU, /* Ndau */ 
    HZ_LANGUAGE_NDONGA, /* Ndonga */ 
    HZ_LANGUAGE_LOW_SAXON, /* Low Saxon */ 
    HZ_LANGUAGE_NEPALI, /* Nepali */ 
    HZ_LANGUAGE_NEWARI, /* Newari */ 
    HZ_LANGUAGE_NGBAKA, /* Ngbaka */ 
    HZ_LANGUAGE_NAGARI, /* Nagari */ 
    HZ_LANGUAGE_NORWAY_HOUSE_CREE, /* Norway House Cree */ 
    HZ_LANGUAGE_NISI, /* Nisi */ 
    HZ_LANGUAGE_NIUEAN, /* Niuean */ 
    HZ_LANGUAGE_NYANKOLE, /* Nyankole */ 
    HZ_LANGUAGE_NKO, /* NKo */ 
    HZ_LANGUAGE_DUTCH, /* Dutch */ 
    HZ_LANGUAGE_NIMADI, /* Nimadi */ 
    HZ_LANGUAGE_NOGAI, /* Nogai */ 
    HZ_LANGUAGE_NORWEGIAN, /* Norwegian */ 
    HZ_LANGUAGE_NOVIAL, /* Novial */ 
    HZ_LANGUAGE_NORTHERN_SAMI, /* Northern Sami */ 
    HZ_LANGUAGE_NORTHERN_SOTHO, /* Northern Sotho */ 
    HZ_LANGUAGE_NORTHERN_TAI, /* Northern Tai */ 
    HZ_LANGUAGE_ESPERANTO, /* Esperanto */ 
    HZ_LANGUAGE_NYAMWEZI, /* Nyamwezi */ 
    HZ_LANGUAGE_NORWEGIAN_NYNORSK_NYNORSK_NORWEGIAN, /* Norwegian Nynorsk (Nynorsk, Norwegian) */ 
    HZ_LANGUAGE_MBEMBE_TIGON, /* Mbembe Tigon */ 
    HZ_LANGUAGE_OCCITAN, /* Occitan */ 
    HZ_LANGUAGE_OJI_CREE, /* Oji-Cree */ 
    HZ_LANGUAGE_OJIBWAY, /* Ojibway */ 
    HZ_LANGUAGE_ODIA_FORMERLY_ORIYA, /* Odia (formerly Oriya) */ 
    HZ_LANGUAGE_OROMO, /* Oromo */ 
    HZ_LANGUAGE_OSSETIAN, /* Ossetian */ 
    HZ_LANGUAGE_PALESTINIAN_ARAMAIC, /* Palestinian Aramaic */ 
    HZ_LANGUAGE_PANGASINAN, /* Pangasinan */ 
    HZ_LANGUAGE_PALI, /* Pali */ 
    HZ_LANGUAGE_PAMPANGAN, /* Pampangan */ 
    HZ_LANGUAGE_PUNJABI, /* Punjabi */ 
    HZ_LANGUAGE_PALPA, /* Palpa */ 
    HZ_LANGUAGE_PAPIAMENTU, /* Papiamentu */ 
    HZ_LANGUAGE_PASHTO, /* Pashto */ 
    HZ_LANGUAGE_PALAUAN, /* Palauan */ 
    HZ_LANGUAGE_BOUYEI, /* Bouyei */ 
    HZ_LANGUAGE_PICARD, /* Picard */ 
    HZ_LANGUAGE_PENNSYLVANIA_GERMAN, /* Pennsylvania German */ 
    HZ_LANGUAGE_POLYTONIC_GREEK, /* Polytonic Greek */ 
    HZ_LANGUAGE_PHAKE, /* Phake */ 
    HZ_LANGUAGE_NORFOLK, /* Norfolk */ 
    HZ_LANGUAGE_FILIPINO, /* Filipino */ 
    HZ_LANGUAGE_PALAUNG, /* Palaung */ 
    HZ_LANGUAGE_POLISH, /* Polish */ 
    HZ_LANGUAGE_PIEMONTESE, /* Piemontese */ 
    HZ_LANGUAGE_WESTERN_PANJABI, /* Western Panjabi */ 
    HZ_LANGUAGE_POCOMCHI, /* Pocomchi */ 
    HZ_LANGUAGE_POHNPEIAN, /* Pohnpeian */ 
    HZ_LANGUAGE_PROVENCAL_OLD_PROVENCAL, /* Provencal / Old Provencal */ 
    HZ_LANGUAGE_PORTUGUESE, /* Portuguese */ 
    HZ_LANGUAGE_WESTERN_PWO_KAREN, /* Western Pwo Karen */ 
    HZ_LANGUAGE_CHIN, /* Chin */ 
    HZ_LANGUAGE_KICHE, /* Kiche */ 
    HZ_LANGUAGE_QUECHUA_BOLIVIA, /* Quechua (Bolivia) */ 
    HZ_LANGUAGE_QUECHUA, /* Quechua */ 
    HZ_LANGUAGE_QUECHUA_ECUADOR, /* Quechua (Ecuador) */ 
    HZ_LANGUAGE_QUECHUA_PERU, /* Quechua (Peru) */ 
    HZ_LANGUAGE_RAJASTHANI, /* Rajasthani */ 
    HZ_LANGUAGE_RAROTONGAN, /* Rarotongan */ 
    HZ_LANGUAGE_RUSSIAN_BURIAT, /* Russian Buriat */ 
    HZ_LANGUAGE_R_CREE, /* R-Cree */ 
    HZ_LANGUAGE_REJANG, /* Rejang */ 
    HZ_LANGUAGE_RIANG, /* Riang */ 
    HZ_LANGUAGE_TARIFIT, /* Tarifit */ 
    HZ_LANGUAGE_RITARUNGO, /* Ritarungo */ 
    HZ_LANGUAGE_ARAKWAL, /* Arakwal */ 
    HZ_LANGUAGE_ROMANSH, /* Romansh */ 
    HZ_LANGUAGE_VLAX_ROMANI, /* Vlax Romani */ 
    HZ_LANGUAGE_ROMANIAN, /* Romanian */ 
    HZ_LANGUAGE_ROMANY, /* Romany */ 
    HZ_LANGUAGE_RUSYN, /* Rusyn */ 
    HZ_LANGUAGE_ROTUMAN, /* Rotuman */ 
    HZ_LANGUAGE_KINYARWANDA, /* Kinyarwanda */ 
    HZ_LANGUAGE_RUNDI, /* Rundi */ 
    HZ_LANGUAGE_AROMANIAN, /* Aromanian */ 
    HZ_LANGUAGE_RUSSIAN, /* Russian */ 
    HZ_LANGUAGE_SADRI, /* Sadri */ 
    HZ_LANGUAGE_SANSKRIT, /* Sanskrit */ 
    HZ_LANGUAGE_SASAK, /* Sasak */ 
    HZ_LANGUAGE_SANTALI, /* Santali */ 
    HZ_LANGUAGE_SAYISI, /* Sayisi */ 
    HZ_LANGUAGE_SICILIAN, /* Sicilian */ 
    HZ_LANGUAGE_SCOTS, /* Scots */ 
    HZ_LANGUAGE_NORTH_SLAVEY, /* North Slavey */ 
    HZ_LANGUAGE_SEKOTA, /* Sekota */ 
    HZ_LANGUAGE_SELKUP, /* Selkup */ 
    HZ_LANGUAGE_OLD_IRISH, /* Old Irish */ 
    HZ_LANGUAGE_SANGO, /* Sango */ 
    HZ_LANGUAGE_SAMOGITIAN, /* Samogitian */ 
    HZ_LANGUAGE_TACHELHIT, /* Tachelhit */ 
    HZ_LANGUAGE_SHAN, /* Shan */ 
    HZ_LANGUAGE_SIBE, /* Sibe */ 
    HZ_LANGUAGE_SIDAMO, /* Sidamo */ 
    HZ_LANGUAGE_SILTE_GURAGE, /* Silte Gurage */ 
    HZ_LANGUAGE_SKOLT_SAMI, /* Skolt Sami */ 
    HZ_LANGUAGE_SLOVAK, /* Slovak */ 
    HZ_LANGUAGE_SLAVEY, /* Slavey */ 
    HZ_LANGUAGE_SLOVENIAN, /* Slovenian */ 
    HZ_LANGUAGE_SOMALI, /* Somali */ 
    HZ_LANGUAGE_SAMOAN, /* Samoan */ 
    HZ_LANGUAGE_SENA, /* Sena */ 
    HZ_LANGUAGE_SHONA, /* Shona */ 
    HZ_LANGUAGE_SINDHI, /* Sindhi */ 
    HZ_LANGUAGE_SINHALA_SINHALESE, /* Sinhala (Sinhalese) */ 
    HZ_LANGUAGE_SONINKE, /* Soninke */ 
    HZ_LANGUAGE_SODO_GURAGE, /* Sodo Gurage */ 
    HZ_LANGUAGE_SONGE, /* Songe */ 
    HZ_LANGUAGE_SOUTHERN_SOTHO, /* Southern Sotho */ 
    HZ_LANGUAGE_ALBANIAN, /* Albanian */ 
    HZ_LANGUAGE_SERBIAN, /* Serbian */ 
    HZ_LANGUAGE_SARDINIAN, /* Sardinian */ 
    HZ_LANGUAGE_SARAIKI, /* Saraiki */ 
    HZ_LANGUAGE_SERER, /* Serer */ 
    HZ_LANGUAGE_SOUTH_SLAVEY, /* South Slavey */ 
    HZ_LANGUAGE_SOUTHERN_SAMI, /* Southern Sami */ 
    HZ_LANGUAGE_SATERLAND_FRISIAN, /* Saterland Frisian */ 
    HZ_LANGUAGE_SUKUMA, /* Sukuma */ 
    HZ_LANGUAGE_SUNDANESE, /* Sundanese */ 
    HZ_LANGUAGE_SURI, /* Suri */ 
    HZ_LANGUAGE_SVAN, /* Svan */ 
    HZ_LANGUAGE_SWEDISH, /* Swedish */ 
    HZ_LANGUAGE_SWADAYA_ARAMAIC, /* Swadaya Aramaic */ 
    HZ_LANGUAGE_SWAHILI, /* Swahili */ 
    HZ_LANGUAGE_SWATI, /* Swati */ 
    HZ_LANGUAGE_SUTU, /* Sutu */ 
    HZ_LANGUAGE_UPPER_SAXON, /* Upper Saxon */ 
    HZ_LANGUAGE_SYLHETI, /* Sylheti */ 
    HZ_LANGUAGE_SYRIAC, /* Syriac */ 
    HZ_LANGUAGE_SYRIAC_ESTRANGELA_SCRIPT_VARIANT_EQUIVALENT_TO_ISO_15924_SYRE, /* Syriac, Estrangela script-variant (equivalent to ISO 15924 'Syre') */ 
    HZ_LANGUAGE_SYRIAC_WESTERN_SCRIPT_VARIANT_EQUIVALENT_TO_ISO_15924_SYRJ, /* Syriac, Western script-variant (equivalent to ISO 15924 'Syrj') */ 
    HZ_LANGUAGE_SYRIAC_EASTERN_SCRIPT_VARIANT_EQUIVALENT_TO_ISO_15924_SYRN, /* Syriac, Eastern script-variant (equivalent to ISO 15924 'Syrn') */ 
    HZ_LANGUAGE_SILESIAN, /* Silesian */ 
    HZ_LANGUAGE_TABASARAN, /* Tabasaran */ 
    HZ_LANGUAGE_TAJIKI, /* Tajiki */ 
    HZ_LANGUAGE_TAMIL, /* Tamil */ 
    HZ_LANGUAGE_TATAR, /* Tatar */ 
    HZ_LANGUAGE_TH_CREE, /* TH-Cree */ 
    HZ_LANGUAGE_DEHONG_DAI, /* Dehong Dai */ 
    HZ_LANGUAGE_TELUGU, /* Telugu */ 
    HZ_LANGUAGE_TETUM, /* Tetum */ 
    HZ_LANGUAGE_TAGALOG, /* Tagalog */ 
    HZ_LANGUAGE_TONGAN, /* Tongan */ 
    HZ_LANGUAGE_TIGRE, /* Tigre */ 
    HZ_LANGUAGE_TIGRINYA, /* Tigrinya */ 
    HZ_LANGUAGE_THAI, /* Thai */ 
    HZ_LANGUAGE_TAHITIAN, /* Tahitian */ 
    HZ_LANGUAGE_TIBETAN, /* Tibetan */ 
    HZ_LANGUAGE_TIV, /* Tiv */ 
    HZ_LANGUAGE_TURKMEN, /* Turkmen */ 
    HZ_LANGUAGE_TAMASHEK, /* Tamashek */ 
    HZ_LANGUAGE_TEMNE, /* Temne */ 
    HZ_LANGUAGE_TSWANA, /* Tswana */ 
    HZ_LANGUAGE_TUNDRA_ENETS, /* Tundra Enets */ 
    HZ_LANGUAGE_TONGA, /* Tonga */ 
    HZ_LANGUAGE_TODO, /* Todo */ 
    HZ_LANGUAGE_TOMA, /* Toma */ 
    HZ_LANGUAGE_TOK_PISIN, /* Tok Pisin */ 
    HZ_LANGUAGE_TURKISH, /* Turkish */ 
    HZ_LANGUAGE_TSONGA, /* Tsonga */ 
    HZ_LANGUAGE_TSHANGLA, /* Tshangla */ 
    HZ_LANGUAGE_TUROYO_ARAMAIC, /* Turoyo Aramaic */ 
    HZ_LANGUAGE_TUMBUKA, /* Tumbuka */ 
    HZ_LANGUAGE_TULU, /* Tulu */ 
    HZ_LANGUAGE_TUVIN, /* Tuvin */ 
    HZ_LANGUAGE_TUVALU, /* Tuvalu */ 
    HZ_LANGUAGE_TWI, /* Twi */ 
    HZ_LANGUAGE_TAY, /* Tay */ 
    HZ_LANGUAGE_TAMAZIGHT, /* Tamazight */ 
    HZ_LANGUAGE_TZOTZIL, /* Tzotzil */ 
    HZ_LANGUAGE_UDMURT, /* Udmurt */ 
    HZ_LANGUAGE_UKRAINIAN, /* Ukrainian */ 
    HZ_LANGUAGE_UMBUNDU, /* Umbundu */ 
    HZ_LANGUAGE_URDU, /* Urdu */ 
    HZ_LANGUAGE_UPPER_SORBIAN, /* Upper Sorbian */ 
    HZ_LANGUAGE_UYGHUR, /* Uyghur */ 
    HZ_LANGUAGE_UZBEK, /* Uzbek */ 
    HZ_LANGUAGE_VENETIAN, /* Venetian */ 
    HZ_LANGUAGE_VENDA, /* Venda */ 
    HZ_LANGUAGE_VIETNAMESE, /* Vietnamese */ 
    HZ_LANGUAGE_VOLAPUK, /* Volapuk */ 
    HZ_LANGUAGE_VORO, /* Voro */ 
    HZ_LANGUAGE_WA, /* Wa */ 
    HZ_LANGUAGE_WAGDI, /* Wagdi */ 
    HZ_LANGUAGE_WARAY_WARAY, /* Waray-Waray */ 
    HZ_LANGUAGE_WEST_CREE, /* West-Cree */ 
    HZ_LANGUAGE_WELSH, /* Welsh */ 
    HZ_LANGUAGE_WOLOF, /* Wolof */ 
    HZ_LANGUAGE_WALLOON, /* Walloon */ 
    HZ_LANGUAGE_MEWATI, /* Mewati */ 
    HZ_LANGUAGE_LU, /* Lu */ 
    HZ_LANGUAGE_XHOSA, /* Xhosa */ 
    HZ_LANGUAGE_MINJANGBAL, /* Minjangbal */ 
    HZ_LANGUAGE_KHENGKHA, /* Khengkha */ 
    HZ_LANGUAGE_SOGA, /* Soga */ 
    HZ_LANGUAGE_KPELLE_LIBERIA, /* Kpelle (Liberia) */ 
    HZ_LANGUAGE_SAKHA, /* Sakha */ 
    HZ_LANGUAGE_YAO, /* Yao */ 
    HZ_LANGUAGE_YAPESE, /* Yapese */ 
    HZ_LANGUAGE_YORUBA, /* Yoruba */ 
    HZ_LANGUAGE_Y_CREE, /* Y-Cree */ 
    HZ_LANGUAGE_YI_CLASSIC, /* Yi Classic */ 
    HZ_LANGUAGE_YI_MODERN, /* Yi Modern */ 
    HZ_LANGUAGE_ZEALANDIC, /* Zealandic */ 
    HZ_LANGUAGE_STANDARD_MOROCCAN_TAMAZIGHT, /* Standard Moroccan Tamazight */ 
    HZ_LANGUAGE_ZHUANG, /* Zhuang */ 
    HZ_LANGUAGE_CHINESE_TRADITIONAL_HONG_KONG_SAR, /* Chinese, Traditional, Hong Kong SAR */ 
    HZ_LANGUAGE_CHINESE_PHONETIC, /* Chinese, Phonetic */ 
    HZ_LANGUAGE_CHINESE_SIMPLIFIED, /* Chinese, Simplified */ 
    HZ_LANGUAGE_CHINESE_TRADITIONAL, /* Chinese, Traditional */ 
    HZ_LANGUAGE_CHINESE_TRADITIONAL_MACAO_SAR, /* Chinese, Traditional, Macao SAR */ 
    HZ_LANGUAGE_ZANDE, /* Zande */ 
    HZ_LANGUAGE_ZULU, /* Zulu */ 
    HZ_LANGUAGE_ZAZAKI, /* Zazaki */ 
} hz_language_t;

typedef struct {
    hz_language_t language;
    const char *language_name;
    hz_tag_t tag;
    const char *codes;
} hz_language_map_t;

static const hz_language_map_t language_map_list[] = {
    {HZ_LANGUAGE_ABAZA, "Abaza", HZ_TAG('A','B','A',' '), "abq"}, /* Abaza */
    {HZ_LANGUAGE_ABKHAZIAN, "Abkhazian", HZ_TAG('A','B','K',' '), "abk"}, /* Abkhazian */
    {HZ_LANGUAGE_ACHOLI, "Acholi", HZ_TAG('A','C','H',' '), "ach"}, /* Acholi */
    {HZ_LANGUAGE_ACHI, "Achi", HZ_TAG('A','C','R',' '), "acr"}, /* Achi */
    {HZ_LANGUAGE_ADYGHE, "Adyghe", HZ_TAG('A','D','Y',' '), "ady"}, /* Adyghe */
    {HZ_LANGUAGE_AFRIKAANS, "Afrikaans", HZ_TAG('A','F','K',' '), "afr"}, /* Afrikaans */
    {HZ_LANGUAGE_AFAR, "Afar", HZ_TAG('A','F','R',' '), "aar"}, /* Afar */
    {HZ_LANGUAGE_AGAW, "Agaw", HZ_TAG('A','G','W',' '), "ahg"}, /* Agaw */
    {HZ_LANGUAGE_AITON, "Aiton", HZ_TAG('A','I','O',' '), "aio"}, /* Aiton */
    {HZ_LANGUAGE_AKAN, "Akan", HZ_TAG('A','K','A',' '), "aka:fat:twi"}, /* Akan */
    {HZ_LANGUAGE_BATAK_ANGKOLA, "Batak Angkola", HZ_TAG('A','K','B',' '), "akb"}, /* Batak Angkola */
    {HZ_LANGUAGE_ALSATIAN, "Alsatian", HZ_TAG('A','L','S',' '), "gsw"}, /* Alsatian */
    {HZ_LANGUAGE_ALTAI, "Altai", HZ_TAG('A','L','T',' '), "atv:alt"}, /* Altai */
    {HZ_LANGUAGE_AMHARIC, "Amharic", HZ_TAG('A','M','H',' '), "amh"}, /* Amharic */
    {HZ_LANGUAGE_ANGLO_SAXON, "Anglo-Saxon", HZ_TAG('A','N','G',' '), "ang"}, /* Anglo-Saxon */
    {HZ_LANGUAGE_PHONETIC_TRANSCRIPTION_AMERICANIST_CONVENTIONS, "Phonetic transcription-Americanist conventions", HZ_TAG('A','P','P','H'), NULL}, /* Phonetic transcription-Americanist conventions */
    {HZ_LANGUAGE_ARABIC, "Arabic", HZ_TAG('A','R','A',' '), "ara"}, /* Arabic */
    {HZ_LANGUAGE_ARAGONESE, "Aragonese", HZ_TAG('A','R','G',' '), "arg"}, /* Aragonese */
    {HZ_LANGUAGE_AARI, "Aari", HZ_TAG('A','R','I',' '), "aiw"}, /* Aari */
    {HZ_LANGUAGE_RAKHINE, "Rakhine", HZ_TAG('A','R','K',' '), "mhv:rmz:rki"}, /* Rakhine */
    {HZ_LANGUAGE_ASSAMESE, "Assamese", HZ_TAG('A','S','M',' '), "asm"}, /* Assamese */
    {HZ_LANGUAGE_ASTURIAN, "Asturian", HZ_TAG('A','S','T',' '), "ast"}, /* Asturian */
    {HZ_LANGUAGE_ATHAPASKAN_LANGUAGES, "Athapaskan languages", HZ_TAG('A','T','H',' '), "aht:apa:apk:apj:apl:apm:apw:ath:bea:sek:bcr:caf:chp:clc:coq:crx:ctc:den:dgr:gce:gwi:haa:hoi:hup:ing:kkz:koy:ktw:kuu:mvb:nav:qwt:scs:srs:taa:tau:tcb:tce:tfn:tgx:tht:tol:ttm:tuu:txc:wlk:xup:xsl"}, /* Athapaskan languages */
    {HZ_LANGUAGE_AVAR, "Avar", HZ_TAG('A','V','R',' '), "ava"}, /* Avar */
    {HZ_LANGUAGE_AWADHI, "Awadhi", HZ_TAG('A','W','A',' '), "awa"}, /* Awadhi */
    {HZ_LANGUAGE_AYMARA, "Aymara", HZ_TAG('A','Y','M',' '), "aym"}, /* Aymara */
    {HZ_LANGUAGE_TORKI, "Torki", HZ_TAG('A','Z','B',' '), "azb"}, /* Torki */
    {HZ_LANGUAGE_AZERBAIJANI, "Azerbaijani", HZ_TAG('A','Z','E',' '), "aze"}, /* Azerbaijani */
    {HZ_LANGUAGE_BADAGA, "Badaga", HZ_TAG('B','A','D',' '), "bfq"}, /* Badaga */
    {HZ_LANGUAGE_BANDA, "Banda", HZ_TAG('B','A','D','0'), "bad:bbp:bfl:bjo:bpd:bqk:gox:kuw:liy:lna:lnl:mnh:nue:nuu:tor:yaj:zmz"}, /* Banda */
    {HZ_LANGUAGE_BAGHELKHANDI, "Baghelkhandi", HZ_TAG('B','A','G',' '), "bfy"}, /* Baghelkhandi */
    {HZ_LANGUAGE_BALKAR, "Balkar", HZ_TAG('B','A','L',' '), "krc"}, /* Balkar */
    {HZ_LANGUAGE_BALINESE, "Balinese", HZ_TAG('B','A','N',' '), "ban"}, /* Balinese */
    {HZ_LANGUAGE_BAVARIAN, "Bavarian", HZ_TAG('B','A','R',' '), "bar"}, /* Bavarian */
    {HZ_LANGUAGE_BAULE, "Baule", HZ_TAG('B','A','U',' '), "bci"}, /* Baule */
    {HZ_LANGUAGE_BATAK_TOBA, "Batak Toba", HZ_TAG('B','B','C',' '), "bbc"}, /* Batak Toba */
    {HZ_LANGUAGE_BERBER, "Berber", HZ_TAG('B','B','R',' '), "auj:ber:cnu:gha:gho:grr:jbe:jbn:kab:mzb:oua:rif:sds:shi:shy:siz:sjs:swn:taq:tez:thv:thz:tia:tjo:tmh:ttq:tzm:zen:zgh"}, /* Berber */
    {HZ_LANGUAGE_BENCH, "Bench", HZ_TAG('B','C','H',' '), "bcq"}, /* Bench */
    {HZ_LANGUAGE_BIBLE_CREE, "Bible Cree", HZ_TAG('B','C','R',' '), NULL}, /* Bible Cree */
    {HZ_LANGUAGE_BANDJALANG, "Bandjalang", HZ_TAG('B','D','Y',' '), "bdy"}, /* Bandjalang */
    {HZ_LANGUAGE_BELARUSSIAN, "Belarussian", HZ_TAG('B','E','L',' '), "bel"}, /* Belarussian */
    {HZ_LANGUAGE_BEMBA, "Bemba", HZ_TAG('B','E','M',' '), "bem"}, /* Bemba */
    {HZ_LANGUAGE_BENGALI, "Bengali", HZ_TAG('B','E','N',' '), "ben"}, /* Bengali */
    {HZ_LANGUAGE_HARYANVI, "Haryanvi", HZ_TAG('B','G','C',' '), "bgc"}, /* Haryanvi */
    {HZ_LANGUAGE_BAGRI, "Bagri", HZ_TAG('B','G','Q',' '), "bgq"}, /* Bagri */
    {HZ_LANGUAGE_BULGARIAN, "Bulgarian", HZ_TAG('B','G','R',' '), "bul"}, /* Bulgarian */
    {HZ_LANGUAGE_BHILI, "Bhili", HZ_TAG('B','H','I',' '), "bhi:bhb"}, /* Bhili */
    {HZ_LANGUAGE_BHOJPURI, "Bhojpuri", HZ_TAG('B','H','O',' '), "bho"}, /* Bhojpuri */
    {HZ_LANGUAGE_BIKOL, "Bikol", HZ_TAG('B','I','K',' '), "bik:bhk:bcl:bto:cts:bln:fbl:lbl:rbl:ubl"}, /* Bikol */
    {HZ_LANGUAGE_BILEN, "Bilen", HZ_TAG('B','I','L',' '), "byn"}, /* Bilen */
    {HZ_LANGUAGE_BISLAMA, "Bislama", HZ_TAG('B','I','S',' '), "bis"}, /* Bislama */
    {HZ_LANGUAGE_KANAUJI, "Kanauji", HZ_TAG('B','J','J',' '), "bjj"}, /* Kanauji */
    {HZ_LANGUAGE_BLACKFOOT, "Blackfoot", HZ_TAG('B','K','F',' '), "bla"}, /* Blackfoot */
    {HZ_LANGUAGE_BALUCHI, "Baluchi", HZ_TAG('B','L','I',' '), "bal"}, /* Baluchi */
    {HZ_LANGUAGE_PAO_KAREN, "Pao Karen", HZ_TAG('B','L','K',' '), "blk"}, /* Pao Karen */
    {HZ_LANGUAGE_BALANTE, "Balante", HZ_TAG('B','L','N',' '), "bjt:ble"}, /* Balante */
    {HZ_LANGUAGE_BALTI, "Balti", HZ_TAG('B','L','T',' '), "bft"}, /* Balti */
    {HZ_LANGUAGE_BAMBARA_BAMANANKAN, "Bambara (Bamanankan)", HZ_TAG('B','M','B',' '), "bam"}, /* Bambara (Bamanankan) */
    {HZ_LANGUAGE_BAMILEKE, "Bamileke", HZ_TAG('B','M','L',' '), "bai:bbj:bko:byv:fmp:jgo:nla:nnh:nnz:nwe:xmg:ybb"}, /* Bamileke */
    {HZ_LANGUAGE_BOSNIAN, "Bosnian", HZ_TAG('B','O','S',' '), "bos"}, /* Bosnian */
    {HZ_LANGUAGE_BISHNUPRIYA_MANIPURI, "Bishnupriya Manipuri", HZ_TAG('B','P','Y',' '), "bpy"}, /* Bishnupriya Manipuri */
    {HZ_LANGUAGE_BRETON, "Breton", HZ_TAG('B','R','E',' '), "bre"}, /* Breton */
    {HZ_LANGUAGE_BRAHUI, "Brahui", HZ_TAG('B','R','H',' '), "brh"}, /* Brahui */
    {HZ_LANGUAGE_BRAJ_BHASHA, "Braj Bhasha", HZ_TAG('B','R','I',' '), "bra"}, /* Braj Bhasha */
    {HZ_LANGUAGE_BURMESE, "Burmese", HZ_TAG('B','R','M',' '), "mya"}, /* Burmese */
    {HZ_LANGUAGE_BODO, "Bodo", HZ_TAG('B','R','X',' '), "brx"}, /* Bodo */
    {HZ_LANGUAGE_BASHKIR, "Bashkir", HZ_TAG('B','S','H',' '), "bak"}, /* Bashkir */
    {HZ_LANGUAGE_BURUSHASKI, "Burushaski", HZ_TAG('B','S','K',' '), "bsk"}, /* Burushaski */
    {HZ_LANGUAGE_BATAK_DAIRI_PAKPAK, "Batak Dairi (Pakpak)", HZ_TAG('B','T','D',' '), "btd"}, /* Batak Dairi (Pakpak) */
    {HZ_LANGUAGE_BETI, "Beti", HZ_TAG('B','T','I',' '), "btb:beb:bum:bxp:eto:ewo:mct"}, /* Beti */
    {HZ_LANGUAGE_BATAK_LANGUAGES, "Batak languages", HZ_TAG('B','T','K',' '), "akb:bbc:btd:btk:btm:bts:btx:btz"}, /* Batak languages */
    {HZ_LANGUAGE_BATAK_MANDAILING, "Batak Mandailing", HZ_TAG('B','T','M',' '), "btm"}, /* Batak Mandailing */
    {HZ_LANGUAGE_BATAK_SIMALUNGUN, "Batak Simalungun", HZ_TAG('B','T','S',' '), "bts"}, /* Batak Simalungun */
    {HZ_LANGUAGE_BATAK_KARO, "Batak Karo", HZ_TAG('B','T','X',' '), "btx"}, /* Batak Karo */
    {HZ_LANGUAGE_BATAK_ALAS_KLUET, "Batak Alas-Kluet", HZ_TAG('B','T','Z',' '), "btz"}, /* Batak Alas-Kluet */
    {HZ_LANGUAGE_BUGIS, "Bugis", HZ_TAG('B','U','G',' '), "bug"}, /* Bugis */
    {HZ_LANGUAGE_MEDUMBA, "Medumba", HZ_TAG('B','Y','V',' '), "byv"}, /* Medumba */
    {HZ_LANGUAGE_KAQCHIKEL, "Kaqchikel", HZ_TAG('C','A','K',' '), "cak"}, /* Kaqchikel */
    {HZ_LANGUAGE_CATALAN, "Catalan", HZ_TAG('C','A','T',' '), "cat"}, /* Catalan */
    {HZ_LANGUAGE_ZAMBOANGA_CHAVACANO, "Zamboanga Chavacano", HZ_TAG('C','B','K',' '), "cbk"}, /* Zamboanga Chavacano */
    {HZ_LANGUAGE_CHINANTEC, "Chinantec", HZ_TAG('C','C','H','N'), "cco:chj:chq:chz:cle:cnl:cnt:cpa:csa:cso:cte:ctl:cuc:cvn"}, /* Chinantec */
    {HZ_LANGUAGE_CEBUANO, "Cebuano", HZ_TAG('C','E','B',' '), "ceb"}, /* Cebuano */
    {HZ_LANGUAGE_CHIGA, "Chiga", HZ_TAG('C','G','G',' '), "cgg"}, /* Chiga */
    {HZ_LANGUAGE_CHAMORRO, "Chamorro", HZ_TAG('C','H','A',' '), "cha"}, /* Chamorro */
    {HZ_LANGUAGE_CHECHEN, "Chechen", HZ_TAG('C','H','E',' '), "che"}, /* Chechen */
    {HZ_LANGUAGE_CHAHA_GURAGE, "Chaha Gurage", HZ_TAG('C','H','G',' '), "sgw"}, /* Chaha Gurage */
    {HZ_LANGUAGE_CHATTISGARHI, "Chattisgarhi", HZ_TAG('C','H','H',' '), "hne"}, /* Chattisgarhi */
    {HZ_LANGUAGE_CHICHEWA_CHEWA_NYANJA, "Chichewa (Chewa, Nyanja)", HZ_TAG('C','H','I',' '), "nya"}, /* Chichewa (Chewa, Nyanja) */
    {HZ_LANGUAGE_CHUKCHI, "Chukchi", HZ_TAG('C','H','K',' '), "ckt"}, /* Chukchi */
    {HZ_LANGUAGE_CHUUKESE, "Chuukese", HZ_TAG('C','H','K','0'), "chk"}, /* Chuukese */
    {HZ_LANGUAGE_CHOCTAW, "Choctaw", HZ_TAG('C','H','O',' '), "cho"}, /* Choctaw */
    {HZ_LANGUAGE_CHIPEWYAN, "Chipewyan", HZ_TAG('C','H','P',' '), "chp"}, /* Chipewyan */
    {HZ_LANGUAGE_CHEROKEE, "Cherokee", HZ_TAG('C','H','R',' '), "chr"}, /* Cherokee */
    {HZ_LANGUAGE_CHUVASH, "Chuvash", HZ_TAG('C','H','U',' '), "chv"}, /* Chuvash */
    {HZ_LANGUAGE_CHEYENNE, "Cheyenne", HZ_TAG('C','H','Y',' '), "chy"}, /* Cheyenne */
    {HZ_LANGUAGE_WESTERN_CHAM, "Western Cham", HZ_TAG('C','J','A',' '), "cja"}, /* Western Cham */
    {HZ_LANGUAGE_EASTERN_CHAM, "Eastern Cham", HZ_TAG('C','J','M',' '), "cjm"}, /* Eastern Cham */
    {HZ_LANGUAGE_COMORIAN, "Comorian", HZ_TAG('C','M','R',' '), "swb:wlc:wni:zdj"}, /* Comorian */
    {HZ_LANGUAGE_COPTIC, "Coptic", HZ_TAG('C','O','P',' '), "cop"}, /* Coptic */
    {HZ_LANGUAGE_CORNISH, "Cornish", HZ_TAG('C','O','R',' '), "cor"}, /* Cornish */
    {HZ_LANGUAGE_CORSICAN, "Corsican", HZ_TAG('C','O','S',' '), "cos"}, /* Corsican */
    {HZ_LANGUAGE_CREOLES, "Creoles", HZ_TAG('C','P','P',' '), "abs:acf:afs:aig:aoa:bah:bew:bis:bjs:bpl:bpq:brc:bxo:bzj:bzk:cbk:ccl:ccm:chn:cks:cpe:cpf:cpi:cpp:cri:crp:crs:dcr:dep:djk:fab:fng:fpe:gac:gcf:gcl:gcr:gib:goq:gpe:gul:gyn:hat:hca:hmo:hwc:icr:idb:ihb:jam:jvd:kcn:kea:kmv:kri:kww:lir:lou:lrt:max:mbf:mcm:mfe:mfp:mkn:mod:msi:mud:mzs:nag:nef:ngm:njt:onx:oor:pap:pcm:pea:pey:pga:pih:pis:pln:pml:pmy:pov:pre:rcf:rop:scf:sci:skw:srm:srn:sta:svc:tas:tch:tcs:tgh:tmg:tpi:trf:tvy:uln:vic:vkp:wes:xmm"}, /* Creoles */
    {HZ_LANGUAGE_CREE, "Cree", HZ_TAG('C','R','E',' '), "cre"}, /* Cree */
    {HZ_LANGUAGE_CARRIER, "Carrier", HZ_TAG('C','R','R',' '), "crx:caf"}, /* Carrier */
    {HZ_LANGUAGE_CRIMEAN_TATAR, "Crimean Tatar", HZ_TAG('C','R','T',' '), "crh"}, /* Crimean Tatar */
    {HZ_LANGUAGE_KASHUBIAN, "Kashubian", HZ_TAG('C','S','B',' '), "csb"}, /* Kashubian */
    {HZ_LANGUAGE_CHURCH_SLAVONIC, "Church Slavonic", HZ_TAG('C','S','L',' '), "chu"}, /* Church Slavonic */
    {HZ_LANGUAGE_CZECH, "Czech", HZ_TAG('C','S','Y',' '), "ces"}, /* Czech */
    {HZ_LANGUAGE_CHITTAGONIAN, "Chittagonian", HZ_TAG('C','T','G',' '), "ctg"}, /* Chittagonian */
    {HZ_LANGUAGE_SAN_BLAS_KUNA, "San Blas Kuna", HZ_TAG('C','U','K',' '), "cuk"}, /* San Blas Kuna */
    {HZ_LANGUAGE_DAGBANI, "Dagbani", HZ_TAG('D','A','G',' '), "dag"}, /* Dagbani */
    {HZ_LANGUAGE_DANISH, "Danish", HZ_TAG('D','A','N',' '), "dan"}, /* Danish */
    {HZ_LANGUAGE_DARGWA, "Dargwa", HZ_TAG('D','A','R',' '), "dar"}, /* Dargwa */
    {HZ_LANGUAGE_DAYI, "Dayi", HZ_TAG('D','A','X',' '), "dax"}, /* Dayi */
    {HZ_LANGUAGE_WOODS_CREE, "Woods Cree", HZ_TAG('D','C','R',' '), "cwd"}, /* Woods Cree */
    {HZ_LANGUAGE_GERMAN, "German", HZ_TAG('D','E','U',' '), "deu"}, /* German */
    {HZ_LANGUAGE_DOGRI_INDIVIDUAL_LANGUAGE, "Dogri (individual language)", HZ_TAG('D','G','O',' '), "dgo"}, /* Dogri (individual language) */
    {HZ_LANGUAGE_DOGRI_MACROLANGUAGE, "Dogri (macrolanguage)", HZ_TAG('D','G','R',' '), "doi"}, /* Dogri (macrolanguage) */
    {HZ_LANGUAGE_DHANGU, "Dhangu", HZ_TAG('D','H','G',' '), "dhg"}, /* Dhangu */
    {HZ_LANGUAGE_DIVEHI_DHIVEHI_MALDIVIAN, "Divehi (Dhivehi, Maldivian)", HZ_TAG('D','H','V',' '), "div"}, /* Divehi (Dhivehi, Maldivian) */
    {HZ_LANGUAGE_DIMLI, "Dimli", HZ_TAG('D','I','Q',' '), "diq"}, /* Dimli */
    {HZ_LANGUAGE_DIVEHI_DHIVEHI_MALDIVIAN, "Divehi (Dhivehi, Maldivian)", HZ_TAG('D','I','V',' '), "div"}, /* Divehi (Dhivehi, Maldivian) */
    {HZ_LANGUAGE_ZARMA, "Zarma", HZ_TAG('D','J','R',' '), "dje"}, /* Zarma */
    {HZ_LANGUAGE_DJAMBARRPUYNGU, "Djambarrpuyngu", HZ_TAG('D','J','R','0'), "djr"}, /* Djambarrpuyngu */
    {HZ_LANGUAGE_DANGME, "Dangme", HZ_TAG('D','N','G',' '), "ada"}, /* Dangme */
    {HZ_LANGUAGE_DAN, "Dan", HZ_TAG('D','N','J',' '), "dnj"}, /* Dan */
    {HZ_LANGUAGE_DINKA, "Dinka", HZ_TAG('D','N','K',' '), "din"}, /* Dinka */
    {HZ_LANGUAGE_DARI, "Dari", HZ_TAG('D','R','I',' '), "prs"}, /* Dari */
    {HZ_LANGUAGE_DHUWAL, "Dhuwal", HZ_TAG('D','U','J',' '), "duj:dwu:dwy"}, /* Dhuwal */
    {HZ_LANGUAGE_DUNGAN, "Dungan", HZ_TAG('D','U','N',' '), "dng"}, /* Dungan */
    {HZ_LANGUAGE_DZONGKHA, "Dzongkha", HZ_TAG('D','Z','N',' '), "dzo"}, /* Dzongkha */
    {HZ_LANGUAGE_EBIRA, "Ebira", HZ_TAG('E','B','I',' '), "igb"}, /* Ebira */
    {HZ_LANGUAGE_EASTERN_CREE, "Eastern Cree", HZ_TAG('E','C','R',' '), "crj:crl"}, /* Eastern Cree */
    {HZ_LANGUAGE_EDO, "Edo", HZ_TAG('E','D','O',' '), "bin"}, /* Edo */
    {HZ_LANGUAGE_EFIK, "Efik", HZ_TAG('E','F','I',' '), "efi"}, /* Efik */
    {HZ_LANGUAGE_GREEK, "Greek", HZ_TAG('E','L','L',' '), "ell"}, /* Greek */
    {HZ_LANGUAGE_EASTERN_MANINKAKAN, "Eastern Maninkakan", HZ_TAG('E','M','K',' '), "emk"}, /* Eastern Maninkakan */
    {HZ_LANGUAGE_ENGLISH, "English", HZ_TAG('E','N','G',' '), "eng"}, /* English */
    {HZ_LANGUAGE_ERZYA, "Erzya", HZ_TAG('E','R','Z',' '), "myv"}, /* Erzya */
    {HZ_LANGUAGE_SPANISH, "Spanish", HZ_TAG('E','S','P',' '), "spa"}, /* Spanish */
    {HZ_LANGUAGE_CENTRAL_YUPIK, "Central Yupik", HZ_TAG('E','S','U',' '), "esu"}, /* Central Yupik */
    {HZ_LANGUAGE_ESTONIAN, "Estonian", HZ_TAG('E','T','I',' '), "est"}, /* Estonian */
    {HZ_LANGUAGE_BASQUE, "Basque", HZ_TAG('E','U','Q',' '), "eus"}, /* Basque */
    {HZ_LANGUAGE_EVENKI, "Evenki", HZ_TAG('E','V','K',' '), "evn"}, /* Evenki */
    {HZ_LANGUAGE_EVEN, "Even", HZ_TAG('E','V','N',' '), "eve"}, /* Even */
    {HZ_LANGUAGE_EWE, "Ewe", HZ_TAG('E','W','E',' '), "ewe"}, /* Ewe */
    {HZ_LANGUAGE_FRENCH_ANTILLEAN, "French Antillean", HZ_TAG('F','A','N',' '), "acf"}, /* French Antillean */
    {HZ_LANGUAGE_FANG, "Fang", HZ_TAG('F','A','N','0'), "fan"}, /* Fang */
    {HZ_LANGUAGE_PERSIAN, "Persian", HZ_TAG('F','A','R',' '), "fas"}, /* Persian */
    {HZ_LANGUAGE_FANTI, "Fanti", HZ_TAG('F','A','T',' '), "fat"}, /* Fanti */
    {HZ_LANGUAGE_FINNISH, "Finnish", HZ_TAG('F','I','N',' '), "fin"}, /* Finnish */
    {HZ_LANGUAGE_FIJIAN, "Fijian", HZ_TAG('F','J','I',' '), "fij"}, /* Fijian */
    {HZ_LANGUAGE_DUTCH_FLEMISH, "Dutch (Flemish)", HZ_TAG('F','L','E',' '), "vls"}, /* Dutch (Flemish) */
    {HZ_LANGUAGE_FEFE, "Fefe", HZ_TAG('F','M','P',' '), "fmp"}, /* Fefe */
    {HZ_LANGUAGE_FOREST_ENETS, "Forest Enets", HZ_TAG('F','N','E',' '), "enf"}, /* Forest Enets */
    {HZ_LANGUAGE_FON, "Fon", HZ_TAG('F','O','N',' '), "fon"}, /* Fon */
    {HZ_LANGUAGE_FAROESE, "Faroese", HZ_TAG('F','O','S',' '), "fao"}, /* Faroese */
    {HZ_LANGUAGE_FRENCH, "French", HZ_TAG('F','R','A',' '), "fra"}, /* French */
    {HZ_LANGUAGE_CAJUN_FRENCH, "Cajun French", HZ_TAG('F','R','C',' '), "frc"}, /* Cajun French */
    {HZ_LANGUAGE_FRISIAN, "Frisian", HZ_TAG('F','R','I',' '), "fry"}, /* Frisian */
    {HZ_LANGUAGE_FRIULIAN, "Friulian", HZ_TAG('F','R','L',' '), "fur"}, /* Friulian */
    {HZ_LANGUAGE_ARPITAN, "Arpitan", HZ_TAG('F','R','P',' '), "frp"}, /* Arpitan */
    {HZ_LANGUAGE_FUTA, "Futa", HZ_TAG('F','T','A',' '), "fuf"}, /* Futa */
    {HZ_LANGUAGE_FULAH, "Fulah", HZ_TAG('F','U','L',' '), "ful"}, /* Fulah */
    {HZ_LANGUAGE_NIGERIAN_FULFULDE, "Nigerian Fulfulde", HZ_TAG('F','U','V',' '), "fuv"}, /* Nigerian Fulfulde */
    {HZ_LANGUAGE_GA, "Ga", HZ_TAG('G','A','D',' '), "gaa"}, /* Ga */
    {HZ_LANGUAGE_SCOTTISH_GAELIC_GAELIC, "Scottish Gaelic (Gaelic)", HZ_TAG('G','A','E',' '), "gla"}, /* Scottish Gaelic (Gaelic) */
    {HZ_LANGUAGE_GAGAUZ, "Gagauz", HZ_TAG('G','A','G',' '), "gag"}, /* Gagauz */
    {HZ_LANGUAGE_GALICIAN, "Galician", HZ_TAG('G','A','L',' '), "glg"}, /* Galician */
    {HZ_LANGUAGE_GARSHUNI, "Garshuni", HZ_TAG('G','A','R',' '), NULL}, /* Garshuni */
    {HZ_LANGUAGE_GARHWALI, "Garhwali", HZ_TAG('G','A','W',' '), "gbm"}, /* Garhwali */
    {HZ_LANGUAGE_GEEZ, "Geez", HZ_TAG('G','E','Z',' '), "gez"}, /* Geez */
    {HZ_LANGUAGE_GITHABUL, "Githabul", HZ_TAG('G','I','H',' '), "gih"}, /* Githabul */
    {HZ_LANGUAGE_GILYAK, "Gilyak", HZ_TAG('G','I','L',' '), "niv"}, /* Gilyak */
    {HZ_LANGUAGE_KIRIBATI_GILBERTESE, "Kiribati (Gilbertese)", HZ_TAG('G','I','L','0'), "gil"}, /* Kiribati (Gilbertese) */
    {HZ_LANGUAGE_KPELLE_GUINEA, "Kpelle (Guinea)", HZ_TAG('G','K','P',' '), "gkp"}, /* Kpelle (Guinea) */
    {HZ_LANGUAGE_GILAKI, "Gilaki", HZ_TAG('G','L','K',' '), "glk"}, /* Gilaki */
    {HZ_LANGUAGE_GUMUZ, "Gumuz", HZ_TAG('G','M','Z',' '), "guk"}, /* Gumuz */
    {HZ_LANGUAGE_GUMATJ, "Gumatj", HZ_TAG('G','N','N',' '), "gnn"}, /* Gumatj */
    {HZ_LANGUAGE_GOGO, "Gogo", HZ_TAG('G','O','G',' '), "gog"}, /* Gogo */
    {HZ_LANGUAGE_GONDI, "Gondi", HZ_TAG('G','O','N',' '), "gon"}, /* Gondi */
    {HZ_LANGUAGE_GREENLANDIC, "Greenlandic", HZ_TAG('G','R','N',' '), "kal"}, /* Greenlandic */
    {HZ_LANGUAGE_GARO, "Garo", HZ_TAG('G','R','O',' '), "grt"}, /* Garo */
    {HZ_LANGUAGE_GUARANI, "Guarani", HZ_TAG('G','U','A',' '), "grn"}, /* Guarani */
    {HZ_LANGUAGE_WAYUU, "Wayuu", HZ_TAG('G','U','C',' '), "guc"}, /* Wayuu */
    {HZ_LANGUAGE_GUPAPUYNGU, "Gupapuyngu", HZ_TAG('G','U','F',' '), "guf"}, /* Gupapuyngu */
    {HZ_LANGUAGE_GUJARATI, "Gujarati", HZ_TAG('G','U','J',' '), "guj"}, /* Gujarati */
    {HZ_LANGUAGE_GUSII, "Gusii", HZ_TAG('G','U','Z',' '), "guz"}, /* Gusii */
    {HZ_LANGUAGE_HAITIAN_HAITIAN_CREOLE, "Haitian (Haitian Creole)", HZ_TAG('H','A','I',' '), "hat"}, /* Haitian (Haitian Creole) */
    {HZ_LANGUAGE_HALAM_FALAM_CHIN, "Halam (Falam Chin)", HZ_TAG('H','A','L',' '), "cfm"}, /* Halam (Falam Chin) */
    {HZ_LANGUAGE_HARAUTI, "Harauti", HZ_TAG('H','A','R',' '), "hoj"}, /* Harauti */
    {HZ_LANGUAGE_HAUSA, "Hausa", HZ_TAG('H','A','U',' '), "hau"}, /* Hausa */
    {HZ_LANGUAGE_HAWAIIAN, "Hawaiian", HZ_TAG('H','A','W',' '), "haw"}, /* Hawaiian */
    {HZ_LANGUAGE_HAYA, "Haya", HZ_TAG('H','A','Y',' '), "hay"}, /* Haya */
    {HZ_LANGUAGE_HAZARAGI, "Hazaragi", HZ_TAG('H','A','Z',' '), "haz"}, /* Hazaragi */
    {HZ_LANGUAGE_HAMMER_BANNA, "Hammer-Banna", HZ_TAG('H','B','N',' '), "amf"}, /* Hammer-Banna */
    {HZ_LANGUAGE_HERERO, "Herero", HZ_TAG('H','E','R',' '), "her"}, /* Herero */
    {HZ_LANGUAGE_HILIGAYNON, "Hiligaynon", HZ_TAG('H','I','L',' '), "hil"}, /* Hiligaynon */
    {HZ_LANGUAGE_HINDI, "Hindi", HZ_TAG('H','I','N',' '), "hin"}, /* Hindi */
    {HZ_LANGUAGE_HIGH_MARI, "High Mari", HZ_TAG('H','M','A',' '), "mrj"}, /* High Mari */
    {HZ_LANGUAGE_HMONG, "Hmong", HZ_TAG('H','M','N',' '), "hmn"}, /* Hmong */
    {HZ_LANGUAGE_HIRI_MOTU, "Hiri Motu", HZ_TAG('H','M','O',' '), "hmo"}, /* Hiri Motu */
    {HZ_LANGUAGE_HINDKO, "Hindko", HZ_TAG('H','N','D',' '), "hno:hnd"}, /* Hindko */
    {HZ_LANGUAGE_HO, "Ho", HZ_TAG('H','O',' ',' '), "hoc"}, /* Ho */
    {HZ_LANGUAGE_HARARI, "Harari", HZ_TAG('H','R','I',' '), "har"}, /* Harari */
    {HZ_LANGUAGE_CROATIAN, "Croatian", HZ_TAG('H','R','V',' '), "hrv"}, /* Croatian */
    {HZ_LANGUAGE_HUNGARIAN, "Hungarian", HZ_TAG('H','U','N',' '), "hun"}, /* Hungarian */
    {HZ_LANGUAGE_ARMENIAN, "Armenian", HZ_TAG('H','Y','E',' '), "hye:hyw"}, /* Armenian */
    {HZ_LANGUAGE_ARMENIAN_EAST, "Armenian East", HZ_TAG('H','Y','E','0'), "hye"}, /* Armenian East */
    {HZ_LANGUAGE_IBAN, "Iban", HZ_TAG('I','B','A',' '), "iba"}, /* Iban */
    {HZ_LANGUAGE_IBIBIO, "Ibibio", HZ_TAG('I','B','B',' '), "ibb"}, /* Ibibio */
    {HZ_LANGUAGE_IGBO, "Igbo", HZ_TAG('I','B','O',' '), "ibo"}, /* Igbo */
    {HZ_LANGUAGE_IDO, "Ido", HZ_TAG('I','D','O',' '), "ido"}, /* Ido */
    {HZ_LANGUAGE_IJO_LANGUAGES, "Ijo languages", HZ_TAG('I','J','O',' '), "iby:ijc:ije:ijn:ijo:ijs:nkx:okd:okr:orr"}, /* Ijo languages */
    {HZ_LANGUAGE_INTERLINGUE, "Interlingue", HZ_TAG('I','L','E',' '), "ile"}, /* Interlingue */
    {HZ_LANGUAGE_ILOKANO, "Ilokano", HZ_TAG('I','L','O',' '), "ilo"}, /* Ilokano */
    {HZ_LANGUAGE_INTERLINGUA, "Interlingua", HZ_TAG('I','N','A',' '), "ina"}, /* Interlingua */
    {HZ_LANGUAGE_INDONESIAN, "Indonesian", HZ_TAG('I','N','D',' '), "ind"}, /* Indonesian */
    {HZ_LANGUAGE_INGUSH, "Ingush", HZ_TAG('I','N','G',' '), "inh"}, /* Ingush */
    {HZ_LANGUAGE_INUKTITUT, "Inuktitut", HZ_TAG('I','N','U',' '), "iku"}, /* Inuktitut */
    {HZ_LANGUAGE_INUPIAT, "Inupiat", HZ_TAG('I','P','K',' '), "ipk"}, /* Inupiat */
    {HZ_LANGUAGE_PHONETIC_TRANSCRIPTION_IPA_CONVENTIONS, "Phonetic transcription-IPA conventions", HZ_TAG('I','P','P','H'), NULL}, /* Phonetic transcription-IPA conventions */
    {HZ_LANGUAGE_IRISH, "Irish", HZ_TAG('I','R','I',' '), "gle"}, /* Irish */
    {HZ_LANGUAGE_IRISH_TRADITIONAL, "Irish Traditional", HZ_TAG('I','R','T',' '), "gle"}, /* Irish Traditional */
    {HZ_LANGUAGE_ICELANDIC, "Icelandic", HZ_TAG('I','S','L',' '), "isl"}, /* Icelandic */
    {HZ_LANGUAGE_INARI_SAMI, "Inari Sami", HZ_TAG('I','S','M',' '), "smn"}, /* Inari Sami */
    {HZ_LANGUAGE_ITALIAN, "Italian", HZ_TAG('I','T','A',' '), "ita"}, /* Italian */
    {HZ_LANGUAGE_HEBREW, "Hebrew", HZ_TAG('I','W','R',' '), "heb"}, /* Hebrew */
    {HZ_LANGUAGE_JAMAICAN_CREOLE, "Jamaican Creole", HZ_TAG('J','A','M',' '), "jam"}, /* Jamaican Creole */
    {HZ_LANGUAGE_JAPANESE, "Japanese", HZ_TAG('J','A','N',' '), "jpn"}, /* Japanese */
    {HZ_LANGUAGE_JAVANESE, "Javanese", HZ_TAG('J','A','V',' '), "jav"}, /* Javanese */
    {HZ_LANGUAGE_LOJBAN, "Lojban", HZ_TAG('J','B','O',' '), "jbo"}, /* Lojban */
    {HZ_LANGUAGE_KRYMCHAK, "Krymchak", HZ_TAG('J','C','T',' '), "jct"}, /* Krymchak */
    {HZ_LANGUAGE_YIDDISH, "Yiddish", HZ_TAG('J','I','I',' '), "yid"}, /* Yiddish */
    {HZ_LANGUAGE_LADINO, "Ladino", HZ_TAG('J','U','D',' '), "lad"}, /* Ladino */
    {HZ_LANGUAGE_JULA, "Jula", HZ_TAG('J','U','L',' '), "dyu"}, /* Jula */
    {HZ_LANGUAGE_KABARDIAN, "Kabardian", HZ_TAG('K','A','B',' '), "kbd"}, /* Kabardian */
    {HZ_LANGUAGE_KABYLE, "Kabyle", HZ_TAG('K','A','B','0'), "kab"}, /* Kabyle */
    {HZ_LANGUAGE_KACHCHI, "Kachchi", HZ_TAG('K','A','C',' '), "kfr"}, /* Kachchi */
    {HZ_LANGUAGE_KALENJIN, "Kalenjin", HZ_TAG('K','A','L',' '), "kln"}, /* Kalenjin */
    {HZ_LANGUAGE_KANNADA, "Kannada", HZ_TAG('K','A','N',' '), "kan"}, /* Kannada */
    {HZ_LANGUAGE_KARACHAY, "Karachay", HZ_TAG('K','A','R',' '), "krc"}, /* Karachay */
    {HZ_LANGUAGE_GEORGIAN, "Georgian", HZ_TAG('K','A','T',' '), "kat"}, /* Georgian */
    {HZ_LANGUAGE_KAZAKH, "Kazakh", HZ_TAG('K','A','Z',' '), "kaz"}, /* Kazakh */
    {HZ_LANGUAGE_MAKONDE, "Makonde", HZ_TAG('K','D','E',' '), "kde"}, /* Makonde */
    {HZ_LANGUAGE_KABUVERDIANU_CRIOULO, "Kabuverdianu (Crioulo)", HZ_TAG('K','E','A',' '), "kea"}, /* Kabuverdianu (Crioulo) */
    {HZ_LANGUAGE_KEBENA, "Kebena", HZ_TAG('K','E','B',' '), "ktb"}, /* Kebena */
    {HZ_LANGUAGE_KEKCHI, "Kekchi", HZ_TAG('K','E','K',' '), "kek"}, /* Kekchi */
    {HZ_LANGUAGE_KHUTSURI_GEORGIAN, "Khutsuri Georgian", HZ_TAG('K','G','E',' '), "kat"}, /* Khutsuri Georgian */
    {HZ_LANGUAGE_KHAKASS, "Khakass", HZ_TAG('K','H','A',' '), "kjh"}, /* Khakass */
    {HZ_LANGUAGE_KHANTY_KAZIM, "Khanty-Kazim", HZ_TAG('K','H','K',' '), "kca"}, /* Khanty-Kazim */
    {HZ_LANGUAGE_KHMER, "Khmer", HZ_TAG('K','H','M',' '), "khm"}, /* Khmer */
    {HZ_LANGUAGE_KHANTY_SHURISHKAR, "Khanty-Shurishkar", HZ_TAG('K','H','S',' '), "kca"}, /* Khanty-Shurishkar */
    {HZ_LANGUAGE_KHAMTI_SHAN, "Khamti Shan", HZ_TAG('K','H','T',' '), "kht"}, /* Khamti Shan */
    {HZ_LANGUAGE_KHANTY_VAKHI, "Khanty-Vakhi", HZ_TAG('K','H','V',' '), "kca"}, /* Khanty-Vakhi */
    {HZ_LANGUAGE_KHOWAR, "Khowar", HZ_TAG('K','H','W',' '), "khw"}, /* Khowar */
    {HZ_LANGUAGE_KIKUYU_GIKUYU, "Kikuyu (Gikuyu)", HZ_TAG('K','I','K',' '), "kik"}, /* Kikuyu (Gikuyu) */
    {HZ_LANGUAGE_KIRGHIZ_KYRGYZ, "Kirghiz (Kyrgyz)", HZ_TAG('K','I','R',' '), "kir"}, /* Kirghiz (Kyrgyz) */
    {HZ_LANGUAGE_KISII, "Kisii", HZ_TAG('K','I','S',' '), "kqs:kss"}, /* Kisii */
    {HZ_LANGUAGE_KIRMANJKI, "Kirmanjki", HZ_TAG('K','I','U',' '), "kiu"}, /* Kirmanjki */
    {HZ_LANGUAGE_SOUTHERN_KIWAI, "Southern Kiwai", HZ_TAG('K','J','D',' '), "kjd"}, /* Southern Kiwai */
    {HZ_LANGUAGE_EASTERN_PWO_KAREN, "Eastern Pwo Karen", HZ_TAG('K','J','P',' '), "kjp"}, /* Eastern Pwo Karen */
    {HZ_LANGUAGE_BUMTHANGKHA, "Bumthangkha", HZ_TAG('K','J','Z',' '), "kjz"}, /* Bumthangkha */
    {HZ_LANGUAGE_KOKNI, "Kokni", HZ_TAG('K','K','N',' '), "kex"}, /* Kokni */
    {HZ_LANGUAGE_KALMYK, "Kalmyk", HZ_TAG('K','L','M',' '), "xal"}, /* Kalmyk */
    {HZ_LANGUAGE_KAMBA, "Kamba", HZ_TAG('K','M','B',' '), "kam"}, /* Kamba */
    {HZ_LANGUAGE_KUMAONI, "Kumaoni", HZ_TAG('K','M','N',' '), "kfy"}, /* Kumaoni */
    {HZ_LANGUAGE_KOMO, "Komo", HZ_TAG('K','M','O',' '), "kmw"}, /* Komo */
    {HZ_LANGUAGE_KOMSO, "Komso", HZ_TAG('K','M','S',' '), "kxc"}, /* Komso */
    {HZ_LANGUAGE_KHORASANI_TURKIC, "Khorasani Turkic", HZ_TAG('K','M','Z',' '), "kmz"}, /* Khorasani Turkic */
    {HZ_LANGUAGE_KANURI, "Kanuri", HZ_TAG('K','N','R',' '), "kau"}, /* Kanuri */
    {HZ_LANGUAGE_KODAGU, "Kodagu", HZ_TAG('K','O','D',' '), "kfa"}, /* Kodagu */
    {HZ_LANGUAGE_KOREAN_OLD_HANGUL, "Korean Old Hangul", HZ_TAG('K','O','H',' '), "kor:okm"}, /* Korean Old Hangul */
    {HZ_LANGUAGE_KONKANI, "Konkani", HZ_TAG('K','O','K',' '), "kok"}, /* Konkani */
    {HZ_LANGUAGE_KOMI, "Komi", HZ_TAG('K','O','M',' '), "kom"}, /* Komi */
    {HZ_LANGUAGE_KIKONGO, "Kikongo", HZ_TAG('K','O','N',' '), "ktu"}, /* Kikongo */
    {HZ_LANGUAGE_KONGO, "Kongo", HZ_TAG('K','O','N','0'), "kon"}, /* Kongo */
    {HZ_LANGUAGE_KOMI_PERMYAK, "Komi-Permyak", HZ_TAG('K','O','P',' '), "koi"}, /* Komi-Permyak */
    {HZ_LANGUAGE_KOREAN, "Korean", HZ_TAG('K','O','R',' '), "kor"}, /* Korean */
    {HZ_LANGUAGE_KOSRAEAN, "Kosraean", HZ_TAG('K','O','S',' '), "kos"}, /* Kosraean */
    {HZ_LANGUAGE_KOMI_ZYRIAN, "Komi-Zyrian", HZ_TAG('K','O','Z',' '), "kpv"}, /* Komi-Zyrian */
    {HZ_LANGUAGE_KPELLE, "Kpelle", HZ_TAG('K','P','L',' '), "kpe"}, /* Kpelle */
    {HZ_LANGUAGE_KRIO, "Krio", HZ_TAG('K','R','I',' '), "kri"}, /* Krio */
    {HZ_LANGUAGE_KARAKALPAK, "Karakalpak", HZ_TAG('K','R','K',' '), "kaa"}, /* Karakalpak */
    {HZ_LANGUAGE_KARELIAN, "Karelian", HZ_TAG('K','R','L',' '), "krl"}, /* Karelian */
    {HZ_LANGUAGE_KARAIM, "Karaim", HZ_TAG('K','R','M',' '), "kdr"}, /* Karaim */
    {HZ_LANGUAGE_KAREN, "Karen", HZ_TAG('K','R','N',' '), "blk:bwe:eky:ghk:jkm:jkp:kar:kjp:kjt:ksw:kvl:kvq:kvt:kvu:kvy:kxf:kxk:kyu:pdu:pwo:pww:wea"}, /* Karen */
    {HZ_LANGUAGE_KOORETE, "Koorete", HZ_TAG('K','R','T',' '), "kqy"}, /* Koorete */
    {HZ_LANGUAGE_KASHMIRI, "Kashmiri", HZ_TAG('K','S','H',' '), "kas"}, /* Kashmiri */
    {HZ_LANGUAGE_RIPUARIAN, "Ripuarian", HZ_TAG('K','S','H','0'), "ksh"}, /* Ripuarian */
    {HZ_LANGUAGE_KHASI, "Khasi", HZ_TAG('K','S','I',' '), "kha"}, /* Khasi */
    {HZ_LANGUAGE_KILDIN_SAMI, "Kildin Sami", HZ_TAG('K','S','M',' '), "sjd"}, /* Kildin Sami */
    {HZ_LANGUAGE_SGAW_KAREN, "Sgaw Karen", HZ_TAG('K','S','W',' '), "ksw"}, /* Sgaw Karen */
    {HZ_LANGUAGE_KUANYAMA, "Kuanyama", HZ_TAG('K','U','A',' '), "kua"}, /* Kuanyama */
    {HZ_LANGUAGE_KUI, "Kui", HZ_TAG('K','U','I',' '), "kxu"}, /* Kui */
    {HZ_LANGUAGE_KULVI, "Kulvi", HZ_TAG('K','U','L',' '), "kfx"}, /* Kulvi */
    {HZ_LANGUAGE_KUMYK, "Kumyk", HZ_TAG('K','U','M',' '), "kum"}, /* Kumyk */
    {HZ_LANGUAGE_KURDISH, "Kurdish", HZ_TAG('K','U','R',' '), "kur"}, /* Kurdish */
    {HZ_LANGUAGE_KURUKH, "Kurukh", HZ_TAG('K','U','U',' '), "kru"}, /* Kurukh */
    {HZ_LANGUAGE_KUY, "Kuy", HZ_TAG('K','U','Y',' '), "kdt"}, /* Kuy */
    {HZ_LANGUAGE_KORYAK, "Koryak", HZ_TAG('K','Y','K',' '), "kpy"}, /* Koryak */
    {HZ_LANGUAGE_WESTERN_KAYAH, "Western Kayah", HZ_TAG('K','Y','U',' '), "kyu"}, /* Western Kayah */
    {HZ_LANGUAGE_LADIN, "Ladin", HZ_TAG('L','A','D',' '), "lld"}, /* Ladin */
    {HZ_LANGUAGE_LAHULI, "Lahuli", HZ_TAG('L','A','H',' '), "bfu"}, /* Lahuli */
    {HZ_LANGUAGE_LAK, "Lak", HZ_TAG('L','A','K',' '), "lbe"}, /* Lak */
    {HZ_LANGUAGE_LAMBANI, "Lambani", HZ_TAG('L','A','M',' '), "lmn"}, /* Lambani */
    {HZ_LANGUAGE_LAO, "Lao", HZ_TAG('L','A','O',' '), "lao"}, /* Lao */
    {HZ_LANGUAGE_LATIN, "Latin", HZ_TAG('L','A','T',' '), "lat"}, /* Latin */
    {HZ_LANGUAGE_LAZ, "Laz", HZ_TAG('L','A','Z',' '), "lzz"}, /* Laz */
    {HZ_LANGUAGE_L_CREE, "L-Cree", HZ_TAG('L','C','R',' '), "crm"}, /* L-Cree */
    {HZ_LANGUAGE_LADAKHI, "Ladakhi", HZ_TAG('L','D','K',' '), "lbj"}, /* Ladakhi */
    {HZ_LANGUAGE_LEZGI, "Lezgi", HZ_TAG('L','E','Z',' '), "lez"}, /* Lezgi */
    {HZ_LANGUAGE_LIGURIAN, "Ligurian", HZ_TAG('L','I','J',' '), "lij"}, /* Ligurian */
    {HZ_LANGUAGE_LIMBURGISH, "Limburgish", HZ_TAG('L','I','M',' '), "lim"}, /* Limburgish */
    {HZ_LANGUAGE_LINGALA, "Lingala", HZ_TAG('L','I','N',' '), "lin"}, /* Lingala */
    {HZ_LANGUAGE_LISU, "Lisu", HZ_TAG('L','I','S',' '), "lis"}, /* Lisu */
    {HZ_LANGUAGE_LAMPUNG, "Lampung", HZ_TAG('L','J','P',' '), "ljp"}, /* Lampung */
    {HZ_LANGUAGE_LAKI, "Laki", HZ_TAG('L','K','I',' '), "lki"}, /* Laki */
    {HZ_LANGUAGE_LOW_MARI, "Low Mari", HZ_TAG('L','M','A',' '), "mhr"}, /* Low Mari */
    {HZ_LANGUAGE_LIMBU, "Limbu", HZ_TAG('L','M','B',' '), "lif"}, /* Limbu */
    {HZ_LANGUAGE_LOMBARD, "Lombard", HZ_TAG('L','M','O',' '), "lmo"}, /* Lombard */
    {HZ_LANGUAGE_LOMWE, "Lomwe", HZ_TAG('L','M','W',' '), "ngl"}, /* Lomwe */
    {HZ_LANGUAGE_LOMA, "Loma", HZ_TAG('L','O','M',' '), "lom"}, /* Loma */
    {HZ_LANGUAGE_LURI, "Luri", HZ_TAG('L','R','C',' '), "lrc:luz:bqi:zum"}, /* Luri */
    {HZ_LANGUAGE_LOWER_SORBIAN, "Lower Sorbian", HZ_TAG('L','S','B',' '), "dsb"}, /* Lower Sorbian */
    {HZ_LANGUAGE_LULE_SAMI, "Lule Sami", HZ_TAG('L','S','M',' '), "smj"}, /* Lule Sami */
    {HZ_LANGUAGE_LITHUANIAN, "Lithuanian", HZ_TAG('L','T','H',' '), "lit"}, /* Lithuanian */
    {HZ_LANGUAGE_LUXEMBOURGISH, "Luxembourgish", HZ_TAG('L','T','Z',' '), "ltz"}, /* Luxembourgish */
    {HZ_LANGUAGE_LUBA_LULUA, "Luba-Lulua", HZ_TAG('L','U','A',' '), "lua"}, /* Luba-Lulua */
    {HZ_LANGUAGE_LUBA_KATANGA, "Luba-Katanga", HZ_TAG('L','U','B',' '), "lub"}, /* Luba-Katanga */
    {HZ_LANGUAGE_GANDA, "Ganda", HZ_TAG('L','U','G',' '), "lug"}, /* Ganda */
    {HZ_LANGUAGE_LUYIA, "Luyia", HZ_TAG('L','U','H',' '), "luy"}, /* Luyia */
    {HZ_LANGUAGE_LUO, "Luo", HZ_TAG('L','U','O',' '), "luo"}, /* Luo */
    {HZ_LANGUAGE_LATVIAN, "Latvian", HZ_TAG('L','V','I',' '), "lav"}, /* Latvian */
    {HZ_LANGUAGE_MADURA, "Madura", HZ_TAG('M','A','D',' '), "mad"}, /* Madura */
    {HZ_LANGUAGE_MAGAHI, "Magahi", HZ_TAG('M','A','G',' '), "mag"}, /* Magahi */
    {HZ_LANGUAGE_MARSHALLESE, "Marshallese", HZ_TAG('M','A','H',' '), "mah"}, /* Marshallese */
    {HZ_LANGUAGE_MAJANG, "Majang", HZ_TAG('M','A','J',' '), "mpe"}, /* Majang */
    {HZ_LANGUAGE_MAKHUWA, "Makhuwa", HZ_TAG('M','A','K',' '), "vmw"}, /* Makhuwa */
    {HZ_LANGUAGE_MALAYALAM, "Malayalam", HZ_TAG('M','A','L',' '), "mal"}, /* Malayalam */
    {HZ_LANGUAGE_MAM, "Mam", HZ_TAG('M','A','M',' '), "mam"}, /* Mam */
    {HZ_LANGUAGE_MANSI, "Mansi", HZ_TAG('M','A','N',' '), "mns"}, /* Mansi */
    {HZ_LANGUAGE_MAPUDUNGUN, "Mapudungun", HZ_TAG('M','A','P',' '), "arn"}, /* Mapudungun */
    {HZ_LANGUAGE_MARATHI, "Marathi", HZ_TAG('M','A','R',' '), "mar"}, /* Marathi */
    {HZ_LANGUAGE_MARWARI, "Marwari", HZ_TAG('M','A','W',' '), "mwr:dhd:rwr:mve:wry:mtr:swv"}, /* Marwari */
    {HZ_LANGUAGE_MBUNDU, "Mbundu", HZ_TAG('M','B','N',' '), "kmb"}, /* Mbundu */
    {HZ_LANGUAGE_MBO, "Mbo", HZ_TAG('M','B','O',' '), "mbo"}, /* Mbo */
    {HZ_LANGUAGE_MANCHU, "Manchu", HZ_TAG('M','C','H',' '), "mnc"}, /* Manchu */
    {HZ_LANGUAGE_MOOSE_CREE, "Moose Cree", HZ_TAG('M','C','R',' '), "crm"}, /* Moose Cree */
    {HZ_LANGUAGE_MENDE, "Mende", HZ_TAG('M','D','E',' '), "men"}, /* Mende */
    {HZ_LANGUAGE_MANDAR, "Mandar", HZ_TAG('M','D','R',' '), "mdr"}, /* Mandar */
    {HZ_LANGUAGE_MEEN, "Meen", HZ_TAG('M','E','N',' '), "mym"}, /* Meen */
    {HZ_LANGUAGE_MERU, "Meru", HZ_TAG('M','E','R',' '), "mer"}, /* Meru */
    {HZ_LANGUAGE_PATTANI_MALAY, "Pattani Malay", HZ_TAG('M','F','A',' '), "mfa"}, /* Pattani Malay */
    {HZ_LANGUAGE_MORISYEN, "Morisyen", HZ_TAG('M','F','E',' '), "mfe"}, /* Morisyen */
    {HZ_LANGUAGE_MINANGKABAU, "Minangkabau", HZ_TAG('M','I','N',' '), "min"}, /* Minangkabau */
    {HZ_LANGUAGE_MIZO, "Mizo", HZ_TAG('M','I','Z',' '), "lus"}, /* Mizo */
    {HZ_LANGUAGE_MACEDONIAN, "Macedonian", HZ_TAG('M','K','D',' '), "mkd"}, /* Macedonian */
    {HZ_LANGUAGE_MAKASAR, "Makasar", HZ_TAG('M','K','R',' '), "mak"}, /* Makasar */
    {HZ_LANGUAGE_KITUBA, "Kituba", HZ_TAG('M','K','W',' '), "mkw"}, /* Kituba */
    {HZ_LANGUAGE_MALE, "Male", HZ_TAG('M','L','E',' '), "mdy"}, /* Male */
    {HZ_LANGUAGE_MALAGASY, "Malagasy", HZ_TAG('M','L','G',' '), "mlg"}, /* Malagasy */
    {HZ_LANGUAGE_MALINKE, "Malinke", HZ_TAG('M','L','N',' '), "mlq"}, /* Malinke */
    {HZ_LANGUAGE_MALAYALAM_REFORMED, "Malayalam Reformed", HZ_TAG('M','L','R',' '), "mal"}, /* Malayalam Reformed */
    {HZ_LANGUAGE_MALAY, "Malay", HZ_TAG('M','L','Y',' '), "msa"}, /* Malay */
    {HZ_LANGUAGE_MANDINKA, "Mandinka", HZ_TAG('M','N','D',' '), "mnk"}, /* Mandinka */
    {HZ_LANGUAGE_MONGOLIAN, "Mongolian", HZ_TAG('M','N','G',' '), "mon"}, /* Mongolian */
    {HZ_LANGUAGE_MANIPURI, "Manipuri", HZ_TAG('M','N','I',' '), "mni"}, /* Manipuri */
    {HZ_LANGUAGE_MANINKA, "Maninka", HZ_TAG('M','N','K',' '), "man:mnk:myq:mku:msc:emk:mwk:mlq"}, /* Maninka */
    {HZ_LANGUAGE_MANX, "Manx", HZ_TAG('M','N','X',' '), "glv"}, /* Manx */
    {HZ_LANGUAGE_MOHAWK, "Mohawk", HZ_TAG('M','O','H',' '), "moh"}, /* Mohawk */
    {HZ_LANGUAGE_MOKSHA, "Moksha", HZ_TAG('M','O','K',' '), "mdf"}, /* Moksha */
    {HZ_LANGUAGE_MOLDAVIAN, "Moldavian", HZ_TAG('M','O','L',' '), "mol"}, /* Moldavian */
    {HZ_LANGUAGE_MON, "Mon", HZ_TAG('M','O','N',' '), "mnw"}, /* Mon */
    {HZ_LANGUAGE_MOROCCAN, "Moroccan", HZ_TAG('M','O','R',' '), NULL}, /* Moroccan */
    {HZ_LANGUAGE_MOSSI, "Mossi", HZ_TAG('M','O','S',' '), "mos"}, /* Mossi */
    {HZ_LANGUAGE_MAORI, "Maori", HZ_TAG('M','R','I',' '), "mri"}, /* Maori */
    {HZ_LANGUAGE_MAITHILI, "Maithili", HZ_TAG('M','T','H',' '), "mai"}, /* Maithili */
    {HZ_LANGUAGE_MALTESE, "Maltese", HZ_TAG('M','T','S',' '), "mlt"}, /* Maltese */
    {HZ_LANGUAGE_MUNDARI, "Mundari", HZ_TAG('M','U','N',' '), "unr"}, /* Mundari */
    {HZ_LANGUAGE_MUSCOGEE, "Muscogee", HZ_TAG('M','U','S',' '), "mus"}, /* Muscogee */
    {HZ_LANGUAGE_MIRANDESE, "Mirandese", HZ_TAG('M','W','L',' '), "mwl"}, /* Mirandese */
    {HZ_LANGUAGE_HMONG_DAW, "Hmong Daw", HZ_TAG('M','W','W',' '), "mww"}, /* Hmong Daw */
    {HZ_LANGUAGE_MAYAN, "Mayan", HZ_TAG('M','Y','N',' '), "acr:agu:caa:cac:cak:chf:ckz:cob:ctu:emy:hus:itz:ixl:jac:kek:kjb:knj:lac:mam:mhc:mop:myn:poc:poh:quc:qum:quv:toj:ttc:tzh:tzj:tzo:usp:yua"}, /* Mayan */
    {HZ_LANGUAGE_MAZANDERANI, "Mazanderani", HZ_TAG('M','Z','N',' '), "mzn"}, /* Mazanderani */
    {HZ_LANGUAGE_NAGA_ASSAMESE, "Naga-Assamese", HZ_TAG('N','A','G',' '), "nag"}, /* Naga-Assamese */
    {HZ_LANGUAGE_NAHUATL, "Nahuatl", HZ_TAG('N','A','H',' '), "azd:azn:azz:nah:naz:nch:nci:ncj:ncl:ncx:ngu:nhc:nhe:nhg:nhi:nhk:nhm:nhn:nhp:nhq:nht:nhv:nhw:nhx:nhy:nhz:nlv:npl:nsu:nuz"}, /* Nahuatl */
    {HZ_LANGUAGE_NANAI, "Nanai", HZ_TAG('N','A','N',' '), "gld"}, /* Nanai */
    {HZ_LANGUAGE_NEAPOLITAN, "Neapolitan", HZ_TAG('N','A','P',' '), "nap"}, /* Neapolitan */
    {HZ_LANGUAGE_NASKAPI, "Naskapi", HZ_TAG('N','A','S',' '), "nsk"}, /* Naskapi */
    {HZ_LANGUAGE_NAURUAN, "Nauruan", HZ_TAG('N','A','U',' '), "nau"}, /* Nauruan */
    {HZ_LANGUAGE_NAVAJO, "Navajo", HZ_TAG('N','A','V',' '), "nav"}, /* Navajo */
    {HZ_LANGUAGE_N_CREE, "N-Cree", HZ_TAG('N','C','R',' '), "csw"}, /* N-Cree */
    {HZ_LANGUAGE_NDEBELE, "Ndebele", HZ_TAG('N','D','B',' '), "nbl:nde"}, /* Ndebele */
    {HZ_LANGUAGE_NDAU, "Ndau", HZ_TAG('N','D','C',' '), "ndc"}, /* Ndau */
    {HZ_LANGUAGE_NDONGA, "Ndonga", HZ_TAG('N','D','G',' '), "ndo"}, /* Ndonga */
    {HZ_LANGUAGE_LOW_SAXON, "Low Saxon", HZ_TAG('N','D','S',' '), "nds"}, /* Low Saxon */
    {HZ_LANGUAGE_NEPALI, "Nepali", HZ_TAG('N','E','P',' '), "nep"}, /* Nepali */
    {HZ_LANGUAGE_NEWARI, "Newari", HZ_TAG('N','E','W',' '), "new"}, /* Newari */
    {HZ_LANGUAGE_NGBAKA, "Ngbaka", HZ_TAG('N','G','A',' '), "nga"}, /* Ngbaka */
    {HZ_LANGUAGE_NAGARI, "Nagari", HZ_TAG('N','G','R',' '), NULL}, /* Nagari */
    {HZ_LANGUAGE_NORWAY_HOUSE_CREE, "Norway House Cree", HZ_TAG('N','H','C',' '), "csw"}, /* Norway House Cree */
    {HZ_LANGUAGE_NISI, "Nisi", HZ_TAG('N','I','S',' '), "dap:njz:tgj"}, /* Nisi */
    {HZ_LANGUAGE_NIUEAN, "Niuean", HZ_TAG('N','I','U',' '), "niu"}, /* Niuean */
    {HZ_LANGUAGE_NYANKOLE, "Nyankole", HZ_TAG('N','K','L',' '), "nyn"}, /* Nyankole */
    {HZ_LANGUAGE_NKO, "NKo", HZ_TAG('N','K','O',' '), "nqo"}, /* NKo */
    {HZ_LANGUAGE_DUTCH, "Dutch", HZ_TAG('N','L','D',' '), "nld"}, /* Dutch */
    {HZ_LANGUAGE_NIMADI, "Nimadi", HZ_TAG('N','O','E',' '), "noe"}, /* Nimadi */
    {HZ_LANGUAGE_NOGAI, "Nogai", HZ_TAG('N','O','G',' '), "nog"}, /* Nogai */
    {HZ_LANGUAGE_NORWEGIAN, "Norwegian", HZ_TAG('N','O','R',' '), "nob"}, /* Norwegian */
    {HZ_LANGUAGE_NOVIAL, "Novial", HZ_TAG('N','O','V',' '), "nov"}, /* Novial */
    {HZ_LANGUAGE_NORTHERN_SAMI, "Northern Sami", HZ_TAG('N','S','M',' '), "sme"}, /* Northern Sami */
    {HZ_LANGUAGE_NORTHERN_SOTHO, "Northern Sotho", HZ_TAG('N','S','O',' '), "nso"}, /* Northern Sotho */
    {HZ_LANGUAGE_NORTHERN_TAI, "Northern Tai", HZ_TAG('N','T','A',' '), "nod"}, /* Northern Tai */
    {HZ_LANGUAGE_ESPERANTO, "Esperanto", HZ_TAG('N','T','O',' '), "epo"}, /* Esperanto */
    {HZ_LANGUAGE_NYAMWEZI, "Nyamwezi", HZ_TAG('N','Y','M',' '), "nym"}, /* Nyamwezi */
    {HZ_LANGUAGE_NORWEGIAN_NYNORSK_NYNORSK_NORWEGIAN, "Norwegian Nynorsk (Nynorsk, Norwegian)", HZ_TAG('N','Y','N',' '), "nno"}, /* Norwegian Nynorsk (Nynorsk, Norwegian) */
    {HZ_LANGUAGE_MBEMBE_TIGON, "Mbembe Tigon", HZ_TAG('N','Z','A',' '), "nza"}, /* Mbembe Tigon */
    {HZ_LANGUAGE_OCCITAN, "Occitan", HZ_TAG('O','C','I',' '), "oci"}, /* Occitan */
    {HZ_LANGUAGE_OJI_CREE, "Oji-Cree", HZ_TAG('O','C','R',' '), "ojs"}, /* Oji-Cree */
    {HZ_LANGUAGE_OJIBWAY, "Ojibway", HZ_TAG('O','J','B',' '), "oji"}, /* Ojibway */
    {HZ_LANGUAGE_ODIA_FORMERLY_ORIYA, "Odia (formerly Oriya)", HZ_TAG('O','R','I',' '), "ori"}, /* Odia (formerly Oriya) */
    {HZ_LANGUAGE_OROMO, "Oromo", HZ_TAG('O','R','O',' '), "orm"}, /* Oromo */
    {HZ_LANGUAGE_OSSETIAN, "Ossetian", HZ_TAG('O','S','S',' '), "oss"}, /* Ossetian */
    {HZ_LANGUAGE_PALESTINIAN_ARAMAIC, "Palestinian Aramaic", HZ_TAG('P','A','A',' '), "sam"}, /* Palestinian Aramaic */
    {HZ_LANGUAGE_PANGASINAN, "Pangasinan", HZ_TAG('P','A','G',' '), "pag"}, /* Pangasinan */
    {HZ_LANGUAGE_PALI, "Pali", HZ_TAG('P','A','L',' '), "pli"}, /* Pali */
    {HZ_LANGUAGE_PAMPANGAN, "Pampangan", HZ_TAG('P','A','M',' '), "pam"}, /* Pampangan */
    {HZ_LANGUAGE_PUNJABI, "Punjabi", HZ_TAG('P','A','N',' '), "pan"}, /* Punjabi */
    {HZ_LANGUAGE_PALPA, "Palpa", HZ_TAG('P','A','P',' '), "plp"}, /* Palpa */
    {HZ_LANGUAGE_PAPIAMENTU, "Papiamentu", HZ_TAG('P','A','P','0'), "pap"}, /* Papiamentu */
    {HZ_LANGUAGE_PASHTO, "Pashto", HZ_TAG('P','A','S',' '), "pus"}, /* Pashto */
    {HZ_LANGUAGE_PALAUAN, "Palauan", HZ_TAG('P','A','U',' '), "pau"}, /* Palauan */
    {HZ_LANGUAGE_BOUYEI, "Bouyei", HZ_TAG('P','C','C',' '), "pcc"}, /* Bouyei */
    {HZ_LANGUAGE_PICARD, "Picard", HZ_TAG('P','C','D',' '), "pcd"}, /* Picard */
    {HZ_LANGUAGE_PENNSYLVANIA_GERMAN, "Pennsylvania German", HZ_TAG('P','D','C',' '), "pdc"}, /* Pennsylvania German */
    {HZ_LANGUAGE_POLYTONIC_GREEK, "Polytonic Greek", HZ_TAG('P','G','R',' '), "ell"}, /* Polytonic Greek */
    {HZ_LANGUAGE_PHAKE, "Phake", HZ_TAG('P','H','K',' '), "phk"}, /* Phake */
    {HZ_LANGUAGE_NORFOLK, "Norfolk", HZ_TAG('P','I','H',' '), "pih"}, /* Norfolk */
    {HZ_LANGUAGE_FILIPINO, "Filipino", HZ_TAG('P','I','L',' '), "fil"}, /* Filipino */
    {HZ_LANGUAGE_PALAUNG, "Palaung", HZ_TAG('P','L','G',' '), "pce:rbb:pll"}, /* Palaung */
    {HZ_LANGUAGE_POLISH, "Polish", HZ_TAG('P','L','K',' '), "pol"}, /* Polish */
    {HZ_LANGUAGE_PIEMONTESE, "Piemontese", HZ_TAG('P','M','S',' '), "pms"}, /* Piemontese */
    {HZ_LANGUAGE_WESTERN_PANJABI, "Western Panjabi", HZ_TAG('P','N','B',' '), "pnb"}, /* Western Panjabi */
    {HZ_LANGUAGE_POCOMCHI, "Pocomchi", HZ_TAG('P','O','H',' '), "poh"}, /* Pocomchi */
    {HZ_LANGUAGE_POHNPEIAN, "Pohnpeian", HZ_TAG('P','O','N',' '), "pon"}, /* Pohnpeian */
    {HZ_LANGUAGE_PROVENCAL_OLD_PROVENCAL, "Provencal / Old Provencal", HZ_TAG('P','R','O',' '), "pro"}, /* Provencal / Old Provencal */
    {HZ_LANGUAGE_PORTUGUESE, "Portuguese", HZ_TAG('P','T','G',' '), "por"}, /* Portuguese */
    {HZ_LANGUAGE_WESTERN_PWO_KAREN, "Western Pwo Karen", HZ_TAG('P','W','O',' '), "pwo"}, /* Western Pwo Karen */
    {HZ_LANGUAGE_CHIN, "Chin", HZ_TAG('Q','I','N',' '), "bgr:biu:cek:cey:cfm:cbl:cka:ckn:clj:clt:cmr:cnb:cnh:cnk:cnw:csh:csj:csv:csy:ctd:cth:czt:dao:gnb:hlt:hmr:hra:lus:mrh:mwq:pck:pkh:pub:ral:rtc:sch:sez:shl:smt:tcp:tcz:vap:weu:zom:zyp"}, /* Chin */
    {HZ_LANGUAGE_KICHE, "Kiche", HZ_TAG('Q','U','C',' '), "quc"}, /* Kiche */
    {HZ_LANGUAGE_QUECHUA_BOLIVIA, "Quechua (Bolivia)", HZ_TAG('Q','U','H',' '), "quh"}, /* Quechua (Bolivia) */
    {HZ_LANGUAGE_QUECHUA, "Quechua", HZ_TAG('Q','U','Z',' '), "quz"}, /* Quechua */
    {HZ_LANGUAGE_QUECHUA_ECUADOR, "Quechua (Ecuador)", HZ_TAG('Q','V','I',' '), "qvi"}, /* Quechua (Ecuador) */
    {HZ_LANGUAGE_QUECHUA_PERU, "Quechua (Peru)", HZ_TAG('Q','W','H',' '), "qwh"}, /* Quechua (Peru) */
    {HZ_LANGUAGE_RAJASTHANI, "Rajasthani", HZ_TAG('R','A','J',' '), "raj"}, /* Rajasthani */
    {HZ_LANGUAGE_RAROTONGAN, "Rarotongan", HZ_TAG('R','A','R',' '), "rar"}, /* Rarotongan */
    {HZ_LANGUAGE_RUSSIAN_BURIAT, "Russian Buriat", HZ_TAG('R','B','U',' '), "bxr"}, /* Russian Buriat */
    {HZ_LANGUAGE_R_CREE, "R-Cree", HZ_TAG('R','C','R',' '), "atj"}, /* R-Cree */
    {HZ_LANGUAGE_REJANG, "Rejang", HZ_TAG('R','E','J',' '), "rej"}, /* Rejang */
    {HZ_LANGUAGE_RIANG, "Riang", HZ_TAG('R','I','A',' '), "ria"}, /* Riang */
    {HZ_LANGUAGE_TARIFIT, "Tarifit", HZ_TAG('R','I','F',' '), "rif"}, /* Tarifit */
    {HZ_LANGUAGE_RITARUNGO, "Ritarungo", HZ_TAG('R','I','T',' '), "rit"}, /* Ritarungo */
    {HZ_LANGUAGE_ARAKWAL, "Arakwal", HZ_TAG('R','K','W',' '), "rkw"}, /* Arakwal */
    {HZ_LANGUAGE_ROMANSH, "Romansh", HZ_TAG('R','M','S',' '), "roh"}, /* Romansh */
    {HZ_LANGUAGE_VLAX_ROMANI, "Vlax Romani", HZ_TAG('R','M','Y',' '), "rmy"}, /* Vlax Romani */
    {HZ_LANGUAGE_ROMANIAN, "Romanian", HZ_TAG('R','O','M',' '), "ron"}, /* Romanian */
    {HZ_LANGUAGE_ROMANY, "Romany", HZ_TAG('R','O','Y',' '), "rom"}, /* Romany */
    {HZ_LANGUAGE_RUSYN, "Rusyn", HZ_TAG('R','S','Y',' '), "rue"}, /* Rusyn */
    {HZ_LANGUAGE_ROTUMAN, "Rotuman", HZ_TAG('R','T','M',' '), "rtm"}, /* Rotuman */
    {HZ_LANGUAGE_KINYARWANDA, "Kinyarwanda", HZ_TAG('R','U','A',' '), "kin"}, /* Kinyarwanda */
    {HZ_LANGUAGE_RUNDI, "Rundi", HZ_TAG('R','U','N',' '), "run"}, /* Rundi */
    {HZ_LANGUAGE_AROMANIAN, "Aromanian", HZ_TAG('R','U','P',' '), "rup"}, /* Aromanian */
    {HZ_LANGUAGE_RUSSIAN, "Russian", HZ_TAG('R','U','S',' '), "rus"}, /* Russian */
    {HZ_LANGUAGE_SADRI, "Sadri", HZ_TAG('S','A','D',' '), "sck"}, /* Sadri */
    {HZ_LANGUAGE_SANSKRIT, "Sanskrit", HZ_TAG('S','A','N',' '), "san"}, /* Sanskrit */
    {HZ_LANGUAGE_SASAK, "Sasak", HZ_TAG('S','A','S',' '), "sas"}, /* Sasak */
    {HZ_LANGUAGE_SANTALI, "Santali", HZ_TAG('S','A','T',' '), "sat"}, /* Santali */
    {HZ_LANGUAGE_SAYISI, "Sayisi", HZ_TAG('S','A','Y',' '), "chp"}, /* Sayisi */
    {HZ_LANGUAGE_SICILIAN, "Sicilian", HZ_TAG('S','C','N',' '), "scn"}, /* Sicilian */
    {HZ_LANGUAGE_SCOTS, "Scots", HZ_TAG('S','C','O',' '), "sco"}, /* Scots */
    {HZ_LANGUAGE_NORTH_SLAVEY, "North Slavey", HZ_TAG('S','C','S',' '), "scs"}, /* North Slavey */
    {HZ_LANGUAGE_SEKOTA, "Sekota", HZ_TAG('S','E','K',' '), "xan"}, /* Sekota */
    {HZ_LANGUAGE_SELKUP, "Selkup", HZ_TAG('S','E','L',' '), "sel"}, /* Selkup */
    {HZ_LANGUAGE_OLD_IRISH, "Old Irish", HZ_TAG('S','G','A',' '), "sga"}, /* Old Irish */
    {HZ_LANGUAGE_SANGO, "Sango", HZ_TAG('S','G','O',' '), "sag"}, /* Sango */
    {HZ_LANGUAGE_SAMOGITIAN, "Samogitian", HZ_TAG('S','G','S',' '), "sgs"}, /* Samogitian */
    {HZ_LANGUAGE_TACHELHIT, "Tachelhit", HZ_TAG('S','H','I',' '), "shi"}, /* Tachelhit */
    {HZ_LANGUAGE_SHAN, "Shan", HZ_TAG('S','H','N',' '), "shn"}, /* Shan */
    {HZ_LANGUAGE_SIBE, "Sibe", HZ_TAG('S','I','B',' '), "sjo"}, /* Sibe */
    {HZ_LANGUAGE_SIDAMO, "Sidamo", HZ_TAG('S','I','D',' '), "sid"}, /* Sidamo */
    {HZ_LANGUAGE_SILTE_GURAGE, "Silte Gurage", HZ_TAG('S','I','G',' '), "xst:stv:wle"}, /* Silte Gurage */
    {HZ_LANGUAGE_SKOLT_SAMI, "Skolt Sami", HZ_TAG('S','K','S',' '), "sms"}, /* Skolt Sami */
    {HZ_LANGUAGE_SLOVAK, "Slovak", HZ_TAG('S','K','Y',' '), "slk"}, /* Slovak */
    {HZ_LANGUAGE_SLAVEY, "Slavey", HZ_TAG('S','L','A',' '), "den:scs:xsl"}, /* Slavey */
    {HZ_LANGUAGE_SLOVENIAN, "Slovenian", HZ_TAG('S','L','V',' '), "slv"}, /* Slovenian */
    {HZ_LANGUAGE_SOMALI, "Somali", HZ_TAG('S','M','L',' '), "som"}, /* Somali */
    {HZ_LANGUAGE_SAMOAN, "Samoan", HZ_TAG('S','M','O',' '), "smo"}, /* Samoan */
    {HZ_LANGUAGE_SENA, "Sena", HZ_TAG('S','N','A',' '), "seh"}, /* Sena */
    {HZ_LANGUAGE_SHONA, "Shona", HZ_TAG('S','N','A','0'), "sna"}, /* Shona */
    {HZ_LANGUAGE_SINDHI, "Sindhi", HZ_TAG('S','N','D',' '), "snd"}, /* Sindhi */
    {HZ_LANGUAGE_SINHALA_SINHALESE, "Sinhala (Sinhalese)", HZ_TAG('S','N','H',' '), "sin"}, /* Sinhala (Sinhalese) */
    {HZ_LANGUAGE_SONINKE, "Soninke", HZ_TAG('S','N','K',' '), "snk"}, /* Soninke */
    {HZ_LANGUAGE_SODO_GURAGE, "Sodo Gurage", HZ_TAG('S','O','G',' '), "gru"}, /* Sodo Gurage */
    {HZ_LANGUAGE_SONGE, "Songe", HZ_TAG('S','O','P',' '), "sop"}, /* Songe */
    {HZ_LANGUAGE_SOUTHERN_SOTHO, "Southern Sotho", HZ_TAG('S','O','T',' '), "sot"}, /* Southern Sotho */
    {HZ_LANGUAGE_ALBANIAN, "Albanian", HZ_TAG('S','Q','I',' '), "sqi"}, /* Albanian */
    {HZ_LANGUAGE_SERBIAN, "Serbian", HZ_TAG('S','R','B',' '), "cnr:srp"}, /* Serbian */
    {HZ_LANGUAGE_SARDINIAN, "Sardinian", HZ_TAG('S','R','D',' '), "srd"}, /* Sardinian */
    {HZ_LANGUAGE_SARAIKI, "Saraiki", HZ_TAG('S','R','K',' '), "skr"}, /* Saraiki */
    {HZ_LANGUAGE_SERER, "Serer", HZ_TAG('S','R','R',' '), "srr"}, /* Serer */
    {HZ_LANGUAGE_SOUTH_SLAVEY, "South Slavey", HZ_TAG('S','S','L',' '), "xsl"}, /* South Slavey */
    {HZ_LANGUAGE_SOUTHERN_SAMI, "Southern Sami", HZ_TAG('S','S','M',' '), "sma"}, /* Southern Sami */
    {HZ_LANGUAGE_SATERLAND_FRISIAN, "Saterland Frisian", HZ_TAG('S','T','Q',' '), "stq"}, /* Saterland Frisian */
    {HZ_LANGUAGE_SUKUMA, "Sukuma", HZ_TAG('S','U','K',' '), "suk"}, /* Sukuma */
    {HZ_LANGUAGE_SUNDANESE, "Sundanese", HZ_TAG('S','U','N',' '), "sun"}, /* Sundanese */
    {HZ_LANGUAGE_SURI, "Suri", HZ_TAG('S','U','R',' '), "suq"}, /* Suri */
    {HZ_LANGUAGE_SVAN, "Svan", HZ_TAG('S','V','A',' '), "sva"}, /* Svan */
    {HZ_LANGUAGE_SWEDISH, "Swedish", HZ_TAG('S','V','E',' '), "swe"}, /* Swedish */
    {HZ_LANGUAGE_SWADAYA_ARAMAIC, "Swadaya Aramaic", HZ_TAG('S','W','A',' '), "aii"}, /* Swadaya Aramaic */
    {HZ_LANGUAGE_SWAHILI, "Swahili", HZ_TAG('S','W','K',' '), "swa"}, /* Swahili */
    {HZ_LANGUAGE_SWATI, "Swati", HZ_TAG('S','W','Z',' '), "ssw"}, /* Swati */
    {HZ_LANGUAGE_SUTU, "Sutu", HZ_TAG('S','X','T',' '), "ngo:xnj:xnq"}, /* Sutu */
    {HZ_LANGUAGE_UPPER_SAXON, "Upper Saxon", HZ_TAG('S','X','U',' '), "sxu"}, /* Upper Saxon */
    {HZ_LANGUAGE_SYLHETI, "Sylheti", HZ_TAG('S','Y','L',' '), "syl"}, /* Sylheti */
    {HZ_LANGUAGE_SYRIAC, "Syriac", HZ_TAG('S','Y','R',' '), "aii:amw:cld:syc:syr:tru"}, /* Syriac */
    {HZ_LANGUAGE_SYRIAC_ESTRANGELA_SCRIPT_VARIANT_EQUIVALENT_TO_ISO_15924_SYRE, "Syriac, Estrangela script-variant (equivalent to ISO 15924 'Syre')", HZ_TAG('S','Y','R','E'), "syc:syr"}, /* Syriac, Estrangela script-variant (equivalent to ISO 15924 'Syre') */
    {HZ_LANGUAGE_SYRIAC_WESTERN_SCRIPT_VARIANT_EQUIVALENT_TO_ISO_15924_SYRJ, "Syriac, Western script-variant (equivalent to ISO 15924 'Syrj')", HZ_TAG('S','Y','R','J'), "syc:syr"}, /* Syriac, Western script-variant (equivalent to ISO 15924 'Syrj') */
    {HZ_LANGUAGE_SYRIAC_EASTERN_SCRIPT_VARIANT_EQUIVALENT_TO_ISO_15924_SYRN, "Syriac, Eastern script-variant (equivalent to ISO 15924 'Syrn')", HZ_TAG('S','Y','R','N'), "syc:syr"}, /* Syriac, Eastern script-variant (equivalent to ISO 15924 'Syrn') */
    {HZ_LANGUAGE_SILESIAN, "Silesian", HZ_TAG('S','Z','L',' '), "szl"}, /* Silesian */
    {HZ_LANGUAGE_TABASARAN, "Tabasaran", HZ_TAG('T','A','B',' '), "tab"}, /* Tabasaran */
    {HZ_LANGUAGE_TAJIKI, "Tajiki", HZ_TAG('T','A','J',' '), "tgk"}, /* Tajiki */
    {HZ_LANGUAGE_TAMIL, "Tamil", HZ_TAG('T','A','M',' '), "tam"}, /* Tamil */
    {HZ_LANGUAGE_TATAR, "Tatar", HZ_TAG('T','A','T',' '), "tat"}, /* Tatar */
    {HZ_LANGUAGE_TH_CREE, "TH-Cree", HZ_TAG('T','C','R',' '), "cwd"}, /* TH-Cree */
    {HZ_LANGUAGE_DEHONG_DAI, "Dehong Dai", HZ_TAG('T','D','D',' '), "tdd"}, /* Dehong Dai */
    {HZ_LANGUAGE_TELUGU, "Telugu", HZ_TAG('T','E','L',' '), "tel"}, /* Telugu */
    {HZ_LANGUAGE_TETUM, "Tetum", HZ_TAG('T','E','T',' '), "tet"}, /* Tetum */
    {HZ_LANGUAGE_TAGALOG, "Tagalog", HZ_TAG('T','G','L',' '), "tgl"}, /* Tagalog */
    {HZ_LANGUAGE_TONGAN, "Tongan", HZ_TAG('T','G','N',' '), "ton"}, /* Tongan */
    {HZ_LANGUAGE_TIGRE, "Tigre", HZ_TAG('T','G','R',' '), "tig"}, /* Tigre */
    {HZ_LANGUAGE_TIGRINYA, "Tigrinya", HZ_TAG('T','G','Y',' '), "tir"}, /* Tigrinya */
    {HZ_LANGUAGE_THAI, "Thai", HZ_TAG('T','H','A',' '), "tha"}, /* Thai */
    {HZ_LANGUAGE_TAHITIAN, "Tahitian", HZ_TAG('T','H','T',' '), "tah"}, /* Tahitian */
    {HZ_LANGUAGE_TIBETAN, "Tibetan", HZ_TAG('T','I','B',' '), "bod"}, /* Tibetan */
    {HZ_LANGUAGE_TIV, "Tiv", HZ_TAG('T','I','V',' '), "tiv"}, /* Tiv */
    {HZ_LANGUAGE_TURKMEN, "Turkmen", HZ_TAG('T','K','M',' '), "tuk"}, /* Turkmen */
    {HZ_LANGUAGE_TAMASHEK, "Tamashek", HZ_TAG('T','M','H',' '), "taq:thv:thz:tmh:ttq"}, /* Tamashek */
    {HZ_LANGUAGE_TEMNE, "Temne", HZ_TAG('T','M','N',' '), "tem"}, /* Temne */
    {HZ_LANGUAGE_TSWANA, "Tswana", HZ_TAG('T','N','A',' '), "tsn"}, /* Tswana */
    {HZ_LANGUAGE_TUNDRA_ENETS, "Tundra Enets", HZ_TAG('T','N','E',' '), "enh"}, /* Tundra Enets */
    {HZ_LANGUAGE_TONGA, "Tonga", HZ_TAG('T','N','G',' '), "toi"}, /* Tonga */
    {HZ_LANGUAGE_TODO, "Todo", HZ_TAG('T','O','D',' '), "xal"}, /* Todo */
    {HZ_LANGUAGE_TOMA, "Toma", HZ_TAG('T','O','D','0'), "tod"}, /* Toma */
    {HZ_LANGUAGE_TOK_PISIN, "Tok Pisin", HZ_TAG('T','P','I',' '), "tpi"}, /* Tok Pisin */
    {HZ_LANGUAGE_TURKISH, "Turkish", HZ_TAG('T','R','K',' '), "tur"}, /* Turkish */
    {HZ_LANGUAGE_TSONGA, "Tsonga", HZ_TAG('T','S','G',' '), "tso"}, /* Tsonga */
    {HZ_LANGUAGE_TSHANGLA, "Tshangla", HZ_TAG('T','S','J',' '), "tsj"}, /* Tshangla */
    {HZ_LANGUAGE_TUROYO_ARAMAIC, "Turoyo Aramaic", HZ_TAG('T','U','A',' '), "tru"}, /* Turoyo Aramaic */
    {HZ_LANGUAGE_TUMBUKA, "Tumbuka", HZ_TAG('T','U','L',' '), "tcy"}, /* Tumbuka */
    {HZ_LANGUAGE_TULU, "Tulu", HZ_TAG('T','U','M',' '), "tum"}, /* Tulu */
    {HZ_LANGUAGE_TUVIN, "Tuvin", HZ_TAG('T','U','V',' '), "tyv"}, /* Tuvin */
    {HZ_LANGUAGE_TUVALU, "Tuvalu", HZ_TAG('T','V','L',' '), "tvl"}, /* Tuvalu */
    {HZ_LANGUAGE_TWI, "Twi", HZ_TAG('T','W','I',' '), "twi"}, /* Twi */
    {HZ_LANGUAGE_TAY, "Tay", HZ_TAG('T','Y','Z',' '), "tyz"}, /* Tay */
    {HZ_LANGUAGE_TAMAZIGHT, "Tamazight", HZ_TAG('T','Z','M',' '), "tzm"}, /* Tamazight */
    {HZ_LANGUAGE_TZOTZIL, "Tzotzil", HZ_TAG('T','Z','O',' '), "tzo"}, /* Tzotzil */
    {HZ_LANGUAGE_UDMURT, "Udmurt", HZ_TAG('U','D','M',' '), "udm"}, /* Udmurt */
    {HZ_LANGUAGE_UKRAINIAN, "Ukrainian", HZ_TAG('U','K','R',' '), "ukr"}, /* Ukrainian */
    {HZ_LANGUAGE_UMBUNDU, "Umbundu", HZ_TAG('U','M','B',' '), "umb"}, /* Umbundu */
    {HZ_LANGUAGE_URDU, "Urdu", HZ_TAG('U','R','D',' '), "urd"}, /* Urdu */
    {HZ_LANGUAGE_UPPER_SORBIAN, "Upper Sorbian", HZ_TAG('U','S','B',' '), "hsb"}, /* Upper Sorbian */
    {HZ_LANGUAGE_UYGHUR, "Uyghur", HZ_TAG('U','Y','G',' '), "uig"}, /* Uyghur */
    {HZ_LANGUAGE_UZBEK, "Uzbek", HZ_TAG('U','Z','B',' '), "uzb"}, /* Uzbek */
    {HZ_LANGUAGE_VENETIAN, "Venetian", HZ_TAG('V','E','C',' '), "vec"}, /* Venetian */
    {HZ_LANGUAGE_VENDA, "Venda", HZ_TAG('V','E','N',' '), "ven"}, /* Venda */
    {HZ_LANGUAGE_VIETNAMESE, "Vietnamese", HZ_TAG('V','I','T',' '), "vie"}, /* Vietnamese */
    {HZ_LANGUAGE_VOLAPUK, "Volapuk", HZ_TAG('V','O','L',' '), "vol"}, /* Volapuk */
    {HZ_LANGUAGE_VORO, "Voro", HZ_TAG('V','R','O',' '), "vro"}, /* Voro */
    {HZ_LANGUAGE_WA, "Wa", HZ_TAG('W','A',' ',' '), "wbm"}, /* Wa */
    {HZ_LANGUAGE_WAGDI, "Wagdi", HZ_TAG('W','A','G',' '), "wbr"}, /* Wagdi */
    {HZ_LANGUAGE_WARAY_WARAY, "Waray-Waray", HZ_TAG('W','A','R',' '), "war"}, /* Waray-Waray */
    {HZ_LANGUAGE_WEST_CREE, "West-Cree", HZ_TAG('W','C','R',' '), "crk"}, /* West-Cree */
    {HZ_LANGUAGE_WELSH, "Welsh", HZ_TAG('W','E','L',' '), "cym"}, /* Welsh */
    {HZ_LANGUAGE_WOLOF, "Wolof", HZ_TAG('W','L','F',' '), "wol"}, /* Wolof */
    {HZ_LANGUAGE_WALLOON, "Walloon", HZ_TAG('W','L','N',' '), "wln"}, /* Walloon */
    {HZ_LANGUAGE_MEWATI, "Mewati", HZ_TAG('W','T','M',' '), "wtm"}, /* Mewati */
    {HZ_LANGUAGE_LU, "Lu", HZ_TAG('X','B','D',' '), "khb"}, /* Lu */
    {HZ_LANGUAGE_XHOSA, "Xhosa", HZ_TAG('X','H','S',' '), "xho"}, /* Xhosa */
    {HZ_LANGUAGE_MINJANGBAL, "Minjangbal", HZ_TAG('X','J','B',' '), "xjb"}, /* Minjangbal */
    {HZ_LANGUAGE_KHENGKHA, "Khengkha", HZ_TAG('X','K','F',' '), "xkf"}, /* Khengkha */
    {HZ_LANGUAGE_SOGA, "Soga", HZ_TAG('X','O','G',' '), "xog"}, /* Soga */
    {HZ_LANGUAGE_KPELLE_LIBERIA, "Kpelle (Liberia)", HZ_TAG('X','P','E',' '), "xpe"}, /* Kpelle (Liberia) */
    {HZ_LANGUAGE_SAKHA, "Sakha", HZ_TAG('Y','A','K',' '), "sah"}, /* Sakha */
    {HZ_LANGUAGE_YAO, "Yao", HZ_TAG('Y','A','O',' '), "yao"}, /* Yao */
    {HZ_LANGUAGE_YAPESE, "Yapese", HZ_TAG('Y','A','P',' '), "yap"}, /* Yapese */
    {HZ_LANGUAGE_YORUBA, "Yoruba", HZ_TAG('Y','B','A',' '), "yor"}, /* Yoruba */
    {HZ_LANGUAGE_Y_CREE, "Y-Cree", HZ_TAG('Y','C','R',' '), "crj:crk:crl"}, /* Y-Cree */
    {HZ_LANGUAGE_YI_CLASSIC, "Yi Classic", HZ_TAG('Y','I','C',' '), NULL}, /* Yi Classic */
    {HZ_LANGUAGE_YI_MODERN, "Yi Modern", HZ_TAG('Y','I','M',' '), "iii"}, /* Yi Modern */
    {HZ_LANGUAGE_ZEALANDIC, "Zealandic", HZ_TAG('Z','E','A',' '), "zea"}, /* Zealandic */
    {HZ_LANGUAGE_STANDARD_MOROCCAN_TAMAZIGHT, "Standard Moroccan Tamazight", HZ_TAG('Z','G','H',' '), "zgh"}, /* Standard Moroccan Tamazight */
    {HZ_LANGUAGE_ZHUANG, "Zhuang", HZ_TAG('Z','H','A',' '), "zha"}, /* Zhuang */
    {HZ_LANGUAGE_CHINESE_TRADITIONAL_HONG_KONG_SAR, "Chinese, Traditional, Hong Kong SAR", HZ_TAG('Z','H','H',' '), "zho"}, /* Chinese, Traditional, Hong Kong SAR */
    {HZ_LANGUAGE_CHINESE_PHONETIC, "Chinese, Phonetic", HZ_TAG('Z','H','P',' '), "zho"}, /* Chinese, Phonetic */
    {HZ_LANGUAGE_CHINESE_SIMPLIFIED, "Chinese, Simplified", HZ_TAG('Z','H','S',' '), "zho"}, /* Chinese, Simplified */
    {HZ_LANGUAGE_CHINESE_TRADITIONAL, "Chinese, Traditional", HZ_TAG('Z','H','T',' '), "zho"}, /* Chinese, Traditional */
    {HZ_LANGUAGE_CHINESE_TRADITIONAL_MACAO_SAR, "Chinese, Traditional, Macao SAR", HZ_TAG('Z','H','T','M'), "zho"}, /* Chinese, Traditional, Macao SAR */
    {HZ_LANGUAGE_ZANDE, "Zande", HZ_TAG('Z','N','D',' '), "zne"}, /* Zande */
    {HZ_LANGUAGE_ZULU, "Zulu", HZ_TAG('Z','U','L',' '), "zul"}, /* Zulu */
    {HZ_LANGUAGE_ZAZAKI, "Zazaki", HZ_TAG('Z','Z','A',' '), "zza"}, /* Zazaki */
};


/*
 *      Registered Features
 *      https://docs.microsoft.com/en-us/typography/opentype/spec/featurelist
 */
typedef enum {
    HZ_FEATURE_AALT = 0, /* Access All Alternates */
    HZ_FEATURE_ABVF = 1, /* Above-base forms */
    HZ_FEATURE_ABVM = 2, /* Above-base Mark Positioning */
    HZ_FEATURE_ABVS = 3, /* Above-base Substitutions */
    HZ_FEATURE_AFRC = 4, /* Alternative Fractions */
    HZ_FEATURE_AKHN = 5, /* Akhands */
    HZ_FEATURE_BLWF = 6, /* Below-base forms */
    HZ_FEATURE_BLWM = 7, /* Below-base Mark Positioning */
    HZ_FEATURE_BLWS = 8, /* Below-base Substitutions */
    HZ_FEATURE_CALT = 9, /* Contextual Alternates */
    HZ_FEATURE_CASE = 10, /* Case-Sensitive Forms */
    HZ_FEATURE_CCMP = 11, /* Glyph Composition / Decomposition */
    HZ_FEATURE_CFAR = 12, /* Conjunct Form After Ro */
    HZ_FEATURE_CJCT = 13, /* Conjunct forms */
    HZ_FEATURE_CLIG = 14, /* Contextual Ligatures */
    HZ_FEATURE_CPCT = 15, /* Centered CJK Punctuation */
    HZ_FEATURE_CPSP = 16, /* Capital Spacing */
    HZ_FEATURE_CSWH = 17, /* Contextual Swash */
    HZ_FEATURE_CURS = 18, /* Cursive Positioning */
    /* 'cv01' – 'cv99' Character Variants */
    HZ_FEATURE_C2PC = 117, /* Petite Capitals From Capitals */
    HZ_FEATURE_C2SC = 118, /* Small Capitals From Capitals */
    HZ_FEATURE_DIST = 119, /* Distances */
    HZ_FEATURE_DLIG = 120, /* Discretionary Ligatures */
    HZ_FEATURE_DNOM = 121, /* Denominators */
    HZ_FEATURE_DTLS = 122, /* Dotless Forms */
    HZ_FEATURE_EXPT = 123, /* Expert Forms */
    HZ_FEATURE_FALT = 124, /* Final Glyph on Line Alternates */
    HZ_FEATURE_FIN2 = 125, /* Terminal Forms #2 */
    HZ_FEATURE_FIN3 = 126, /* Terminal Forms #3 */
    HZ_FEATURE_FINA = 127, /* Terminal Forms */
    HZ_FEATURE_FLAC = 128, /* Flattened accent forms */
    HZ_FEATURE_FRAC = 129, /* Fractions */
    HZ_FEATURE_FWID = 130, /* Full Widths */
    HZ_FEATURE_HALF = 131, /* Half Forms */
    HZ_FEATURE_HALN = 132, /* Halant Forms */
    HZ_FEATURE_HALT = 133, /* Alternate Half Widths */
    HZ_FEATURE_HIST = 134, /* Historical Forms */
    HZ_FEATURE_HKNA = 135, /* Horizontal Kana Alternates */
    HZ_FEATURE_HLIG = 136, /* Historical Ligaturess */
    HZ_FEATURE_HNGL = 137, /* Hangul */
    HZ_FEATURE_HOJO = 138, /* Hojo Kanji Forms (JIS X 0212-1990 Kanji Forms) */
    HZ_FEATURE_HWID = 139, /* Half Widths */
    HZ_FEATURE_INIT = 140, /* Initial Forms */
    HZ_FEATURE_ISOL = 141, /* Isolated Forms */
    HZ_FEATURE_ITAL = 142, /* Italics */
    HZ_FEATURE_JALT = 143, /* Justification Alternates */
    HZ_FEATURE_JP78 = 144, /* JIS78 Forms */
    HZ_FEATURE_JP83 = 145, /* JIS83 Forms */
    HZ_FEATURE_JP90 = 146, /* JIS90 Forms */
    HZ_FEATURE_JP04 = 147, /* JIS2004 Forms */
    HZ_FEATURE_KERN = 148, /* Kerning */
    HZ_FEATURE_LFBD = 149, /* Left Bounds */
    HZ_FEATURE_LIGA = 150, /* Standard Ligatures */
    HZ_FEATURE_LJMO = 151, /* Leading Jamo Forms */
    HZ_FEATURE_LNUM = 152, /* Lining Figures */
    HZ_FEATURE_LOCL = 153, /* Localized Forms */
    HZ_FEATURE_LTRA = 154, /* Left-to-right alternates */
    HZ_FEATURE_LTRM = 155, /* Left-to-right mirrored forms */
    HZ_FEATURE_MARK = 156, /* Mark Positioning */
    HZ_FEATURE_MED2 = 157, /* Medial Forms #2 */
    HZ_FEATURE_MEDI = 158, /* Medial Forms */
    HZ_FEATURE_MGRK = 159, /* Mathematical Greek */
    HZ_FEATURE_MKMK = 160, /* Mark to Mark Positioning */
    HZ_FEATURE_MSET = 161, /* Mark Positioning via Substitution */
    HZ_FEATURE_NALT = 162, /* Alternate Annotation Forms */
    HZ_FEATURE_NLCK = 163, /* NLC Kanji Forms */
    HZ_FEATURE_NUKT = 164, /* Nukta Forms */
    HZ_FEATURE_NUMR = 165, /* Numerators */
    HZ_FEATURE_ONUM = 166, /* Oldstyle Figures */
    HZ_FEATURE_OPBD = 167, /* Optical Bounds */
    HZ_FEATURE_ORDN = 168, /* Ordinals */
    HZ_FEATURE_ORNM = 169, /* Ornaments */
    HZ_FEATURE_PALT = 170, /* Proportional Alternate Widths */
    HZ_FEATURE_PCAP = 171, /* Petite Capitals */
    HZ_FEATURE_PKNA = 172, /* Proportional Kana */
    HZ_FEATURE_PNUM = 173, /* Proportional Figures */
    HZ_FEATURE_PREF = 174, /* Pre-Base Forms */
    HZ_FEATURE_PRES = 175, /* Pre-base Substitutions */
    HZ_FEATURE_PSTF = 176, /* Post-base Forms */
    HZ_FEATURE_PSTS = 177, /* Post-base Substitutions */
    HZ_FEATURE_PWID = 178, /* Proportional Widths */
    HZ_FEATURE_QWID = 179, /* Quarter Widths */
    HZ_FEATURE_RAND = 180, /* Randomize */
    HZ_FEATURE_RCLT = 181, /* Required Contextual Alternates */
    HZ_FEATURE_RKRF = 182, /* Rakar Forms */
    HZ_FEATURE_RLIG = 183, /* Required Ligatures */
    HZ_FEATURE_RPHF = 184, /* Reph Forms */
    HZ_FEATURE_RTBD = 185, /* Right Bounds */
    HZ_FEATURE_RTLA = 186, /* Right-to-left alternates */
    HZ_FEATURE_RTLM = 187,  /* Right-to-left mirrored forms */
    HZ_FEATURE_RUBY = 188, /* Ruby Notation Forms */
    HZ_FEATURE_RVRN = 189, /* Required Variation Alternates */
    HZ_FEATURE_SALT = 190, /* Stylistic alternates */
    HZ_FEATURE_SINF = 191, /* Scientific Inferiors */
    HZ_FEATURE_SIZE = 192, /* Optical size */
    HZ_FEATURE_SMCP = 193, /* Small Capitals */
    HZ_FEATURE_SMPL = 194, /* Simplified Forms */
    /*  ss01 - ss20 Stylistic Sets */
    HZ_FEATURE_SS01 = 195,
    HZ_FEATURE_SS02 = 196,
    HZ_FEATURE_SS03 = 197,
    HZ_FEATURE_SS04 = 198,
    HZ_FEATURE_SS05 = 199,
    HZ_FEATURE_SS06 = 200,
    HZ_FEATURE_SS07 = 201,
    HZ_FEATURE_SS08 = 202,
    HZ_FEATURE_SS09 = 203,
    HZ_FEATURE_SS10 = 204,
    HZ_FEATURE_SS11 = 205,
    HZ_FEATURE_SS12 = 206,
    HZ_FEATURE_SS13 = 207,
    HZ_FEATURE_SS14 = 208,
    HZ_FEATURE_SS15 = 209,
    HZ_FEATURE_SS16 = 210,
    HZ_FEATURE_SS17 = 211,
    HZ_FEATURE_SS18 = 212,
    HZ_FEATURE_SS19 = 213,
    HZ_FEATURE_SS20 = 214,
    HZ_FEATURE_SSTY = 215, /* Math script style alternates */
    HZ_FEATURE_STCH = 216, /* Stretching Glyph Decomposition */
    HZ_FEATURE_SUBS = 217, /* Subscript */
    HZ_FEATURE_SUPS = 218, /* Superscript */
    HZ_FEATURE_SWSH = 219, /* Swash */
    HZ_FEATURE_TITL = 220, /* Titling */
    HZ_FEATURE_TJMO = 221, /* Trailing Jamo Forms */
    HZ_FEATURE_TNAM = 222, /* Traditional Name Forms */
    HZ_FEATURE_TNUM = 223, /* Tabular Figures */
    HZ_FEATURE_TRAD = 224, /* Traditional Forms */
    HZ_FEATURE_TWID = 225, /* Third Widths */
    HZ_FEATURE_UNIC = 226, /* Unicase */
    HZ_FEATURE_VALT = 227, /* Alternate Vertical Metrics */
    HZ_FEATURE_VATU = 228, /* Vattu Variants */
    HZ_FEATURE_VERT = 229, /* Vertical Writing */
    HZ_FEATURE_VHAL = 230, /* Alternate Vertical Half Metrics */
    HZ_FEATURE_VJMO = 231, /* Vowel Jamo Forms */
    HZ_FEATURE_VKNA = 232, /* Vertical Kana Alternates */
    HZ_FEATURE_VKRN = 233, /* Vertical Kerning */
    HZ_FEATURE_VPAL = 234, /* Proportional Alternate Vertical Metrics */
    HZ_FEATURE_VRT2 = 235, /* Vertical Alternates and Rotation */
    HZ_FEATURE_VRTR = 236, /* Vertical Alternates for Rotation */
    HZ_FEATURE_ZERO = 237, /* Slashed Zero */
    HZ_FEATURE_COUNT
} hz_feature_t;

typedef struct hz_feature_info_t {
    hz_feature_t feature;
    hz_tag_t tag;
} hz_feature_info_t;

static const hz_feature_info_t HZ_FEATURE_INFO_LUT[HZ_FEATURE_COUNT] = {
        {HZ_FEATURE_AALT, HZ_TAG('a', 'a', 'l', 't')}, /* Access All Alternates */
        {HZ_FEATURE_ABVF, HZ_TAG('a', 'b', 'v', 'f')}, /* Above-base forms */
        {HZ_FEATURE_ABVM, HZ_TAG('a', 'b', 'v', 'm')}, /* Above-base Mark Positioning */
        {HZ_FEATURE_ABVS, HZ_TAG('a', 'b', 'v', 's')}, /* Above-base Substitutions */
        {HZ_FEATURE_AFRC, HZ_TAG('a', 'f', 'r', 'c')}, /* Alternative Fractions */
        {HZ_FEATURE_AKHN, HZ_TAG('a', 'k', 'h', 'n')}, /* Akhands */
        {HZ_FEATURE_BLWF, HZ_TAG('b', 'l', 'w', 'f')}, /* Below-base forms */
        {HZ_FEATURE_BLWM, HZ_TAG('b', 'l', 'w', 'm')}, /* Below-base Mark Positioning */
        {HZ_FEATURE_BLWS, HZ_TAG('b', 'l', 'w', 's')}, /* Below-base Substitutions */
        {HZ_FEATURE_CALT, HZ_TAG('c', 'a', 'l', 't')}, /* Contextual Alternates */
        {HZ_FEATURE_CASE, HZ_TAG('c', 'a', 's', 'e')}, /* Case-Sensitive Forms */
        {HZ_FEATURE_CCMP, HZ_TAG('c', 'c', 'm', 'p')}, /* Glyph Composition / Decomposition */
        {HZ_FEATURE_CFAR, HZ_TAG('c', 'f', 'a', 'r')}, /* Conjunct Form After Ro */
        {HZ_FEATURE_CJCT, HZ_TAG('c', 'j', 'c', 't')}, /* Conjunct forms */
        {HZ_FEATURE_CLIG, HZ_TAG('c', 'l', 'i', 'g')}, /* Contextual Ligatures */
        {HZ_FEATURE_CPCT, HZ_TAG('c', 'p', 'c', 't')}, /* Centered CJK Punctuation */
        {HZ_FEATURE_CPSP, HZ_TAG('c', 'p', 's', 'p')}, /* Capital Spacing */
        {HZ_FEATURE_CSWH, HZ_TAG('c', 's', 'w', 'h')}, /* Contextual Swash */
        {HZ_FEATURE_CURS, HZ_TAG('c', 'u', 'r', 's')}, /* Cursive Positioning */
        /* 'cv01' – 'cv99' Character Variants */
        {HZ_FEATURE_C2PC, HZ_TAG('c', '2', 'p', 'c')}, /* Petite Capitals From Capitals */
        {HZ_FEATURE_C2SC, HZ_TAG('c', '2', 's', 'c')}, /* Small Capitals From Capitals */
        {HZ_FEATURE_DIST, HZ_TAG('d', 'i', 's', 't')}, /* Distances */
        {HZ_FEATURE_DLIG, HZ_TAG('d', 'l', 'i', 'g')}, /* Discretionary Ligatures */
        {HZ_FEATURE_DNOM, HZ_TAG('d', 'n', 'o', 'm')}, /* Denominators */
        {HZ_FEATURE_DTLS, HZ_TAG('d', 't', 'l', 's')}, /* Dotless Forms */
        {HZ_FEATURE_EXPT, HZ_TAG('e', 'x', 'p', 't')}, /* Expert Forms */
        {HZ_FEATURE_FALT, HZ_TAG('f', 'a', 'l', 't')}, /* Final Glyph on Line Alternates */
        {HZ_FEATURE_FIN2, HZ_TAG('f', 'i', 'n', '2')}, /* Terminal Forms #2 */
        {HZ_FEATURE_FIN3, HZ_TAG('f', 'i', 'n', '3')}, /* Terminal Forms #3 */
        {HZ_FEATURE_FINA, HZ_TAG('f', 'i', 'n', 'a')}, /* Terminal Forms */
        {HZ_FEATURE_FLAC, HZ_TAG('f', 'l', 'a', 'c')}, /* Flattened accent forms */
        {HZ_FEATURE_FRAC, HZ_TAG('f', 'r', 'a', 'c')}, /* Fractions */
        {HZ_FEATURE_FWID, HZ_TAG('f', 'w', 'i', 'd')}, /* Full Widths */
        {HZ_FEATURE_HALF, HZ_TAG('h', 'a', 'l', 'f')}, /* Half Forms */
        {HZ_FEATURE_HALN, HZ_TAG('h', 'a', 'l', 'n')}, /* Halant Forms */
        {HZ_FEATURE_HALT, HZ_TAG('h', 'a', 'l', 't')}, /* Alternate Half Widths */
        {HZ_FEATURE_HIST, HZ_TAG('h', 'i', 's', 't')}, /* Historical Forms */
        {HZ_FEATURE_HKNA, HZ_TAG('h', 'k', 'n', 'a')}, /* Horizontal Kana Alternates */
        {HZ_FEATURE_HLIG, HZ_TAG('h', 'l', 'i', 'g')}, /* Historical Ligaturess */
        {HZ_FEATURE_HNGL, HZ_TAG('h', 'n', 'g', 'l')}, /* Hangul */
        {HZ_FEATURE_HOJO, HZ_TAG('h', 'o', 'j', 'o')}, /* Hojo Kanji Forms (JIS X 0212-1990 Kanji Forms) */
        {HZ_FEATURE_HWID, HZ_TAG('h', 'w', 'i', 'd')}, /* Half Widths */
        {HZ_FEATURE_INIT, HZ_TAG('i', 'n', 'i', 't')}, /* Initial Forms */
        {HZ_FEATURE_ISOL, HZ_TAG('i', 's', 'o', 'l')}, /* Isolated Forms */
        {HZ_FEATURE_ITAL, HZ_TAG('i', 't', 'a', 'l')}, /* Italics */
        {HZ_FEATURE_JALT, HZ_TAG('j', 'a', 'l', 't')}, /* Justification Alternates */
        {HZ_FEATURE_JP78, HZ_TAG('j', 'p', '7', '8')}, /* JIS78 Forms */
        {HZ_FEATURE_JP83, HZ_TAG('j', 'p', '8', '3')}, /* JIS83 Forms */
        {HZ_FEATURE_JP90, HZ_TAG('j', 'p', '9', '0')}, /* JIS90 Forms */
        {HZ_FEATURE_JP04, HZ_TAG('j', 'p', '0', '4')}, /* JIS2004 Forms */
        {HZ_FEATURE_KERN, HZ_TAG('k', 'e', 'r', 'n')}, /* Kerning */
        {HZ_FEATURE_LFBD, HZ_TAG('l', 'f', 'b', 'd')}, /* Left Bounds */
        {HZ_FEATURE_LIGA, HZ_TAG('l', 'i', 'g', 'a')}, /* Standard Ligatures */
        {HZ_FEATURE_LJMO, HZ_TAG('l', 'j', 'm', 'o')}, /* Leading Jamo Forms */
        {HZ_FEATURE_LNUM, HZ_TAG('l', 'n', 'u', 'm')}, /* Lining Figures */
        {HZ_FEATURE_LOCL, HZ_TAG('l', 'o', 'c', 'l')}, /* Localized Forms */
        {HZ_FEATURE_LTRA, HZ_TAG('l', 't', 'r', 'a')}, /* Left-to-right alternates */
        {HZ_FEATURE_LTRM, HZ_TAG('l', 't', 'r', 'm')}, /* Left-to-right mirrored forms */
        {HZ_FEATURE_MARK, HZ_TAG('m', 'a', 'r', 'k')}, /* Mark Positioning */
        {HZ_FEATURE_MED2, HZ_TAG('m', 'e', 'd', '2')}, /* Medial Forms #2 */
        {HZ_FEATURE_MEDI, HZ_TAG('m', 'e', 'd', 'i')}, /* Medial Forms */
        {HZ_FEATURE_MGRK, HZ_TAG('m', 'g', 'r', 'k')}, /* Mathematical Greek */
        {HZ_FEATURE_MKMK, HZ_TAG('m', 'k', 'm', 'k')}, /* Mark to Mark Positioning */
        {HZ_FEATURE_MSET, HZ_TAG('m', 's', 'e', 't')}, /* Mark Positioning via Substitution */
        {HZ_FEATURE_NALT, HZ_TAG('n', 'a', 'l', 't')}, /* Alternate Annotation Forms */
        {HZ_FEATURE_NLCK, HZ_TAG('n', 'l', 'c', 'k')}, /* NLC Kanji Forms */
        {HZ_FEATURE_NUKT, HZ_TAG('n', 'u', 'k', 't')}, /* Nukta Forms */
        {HZ_FEATURE_NUMR, HZ_TAG('n', 'u', 'm', 'r')}, /* Numerators */
        {HZ_FEATURE_ONUM, HZ_TAG('o', 'n', 'u', 'm')}, /* Oldstyle Figures */
        {HZ_FEATURE_OPBD, HZ_TAG('o', 'p', 'b', 'd')}, /* Optical Bounds */
        {HZ_FEATURE_ORDN, HZ_TAG('o', 'r', 'd', 'n')}, /* Ordinals */
        {HZ_FEATURE_ORNM, HZ_TAG('o', 'r', 'n', 'm')}, /* Ornaments */
        {HZ_FEATURE_PALT, HZ_TAG('p', 'a', 'l', 't')}, /* Proportional Alternate Widths */
        {HZ_FEATURE_PCAP, HZ_TAG('p', 'c', 'a', 'p')}, /* Petite Capitals */
        {HZ_FEATURE_PKNA, HZ_TAG('p', 'k', 'n', 'a')}, /* Proportional Kana */
        {HZ_FEATURE_PNUM, HZ_TAG('p', 'n', 'u', 'm')}, /* Proportional Figures */
        {HZ_FEATURE_PREF, HZ_TAG('p', 'r', 'e', 'f')}, /* Pre-Base Forms */
        {HZ_FEATURE_PRES, HZ_TAG('p', 'r', 'e', 's')}, /* Pre-base Substitutions */
        {HZ_FEATURE_PSTF, HZ_TAG('p', 's', 't', 'f')}, /* Post-base Forms */
        {HZ_FEATURE_PSTS, HZ_TAG('p', 's', 't', 's')}, /* Post-base Substitutions */
        {HZ_FEATURE_PWID, HZ_TAG('p', 'w', 'i', 'd')}, /* Proportional Widths */
        {HZ_FEATURE_QWID, HZ_TAG('q', 'w', 'i', 'd')}, /* Quarter Widths */
        {HZ_FEATURE_RAND, HZ_TAG('r', 'a', 'n', 'd')}, /* Randomize */
        {HZ_FEATURE_RCLT, HZ_TAG('r', 'c', 'l', 't')}, /* Required Contextual Alternates */
        {HZ_FEATURE_RKRF, HZ_TAG('r', 'k', 'r', 'f')}, /* Rakar Forms */
        {HZ_FEATURE_RLIG, HZ_TAG('r', 'l', 'i', 'g')}, /* Required Ligatures */
        {HZ_FEATURE_RPHF, HZ_TAG('r', 'p', 'h', 'f')}, /* Reph Forms */
        {HZ_FEATURE_RTBD, HZ_TAG('r', 't', 'b', 'd')}, /* Right Bounds */
        {HZ_FEATURE_RTLA, HZ_TAG('r', 't', 'l', 'a')}, /* Right-to-left alternates */
        {HZ_FEATURE_RTLM, HZ_TAG('r', 't', 'l', 'm')},  /* Right-to-left mirrored forms */
        {HZ_FEATURE_RUBY, HZ_TAG('r', 'u', 'b', 'y')}, /* Ruby Notation Forms */
        {HZ_FEATURE_RVRN, HZ_TAG('r', 'v', 'r', 'n')}, /* Required Variation Alternates */
        {HZ_FEATURE_SALT, HZ_TAG('s', 'a', 'l', 't')}, /* Stylistic alternates */
        {HZ_FEATURE_SINF, HZ_TAG('s', 'i', 'n', 'f')}, /* Scientific Inferiors */
        {HZ_FEATURE_SIZE, HZ_TAG('s', 'i', 'z', 'e')}, /* Optical size */
        {HZ_FEATURE_SMCP, HZ_TAG('s', 'm', 'c', 'p')}, /* Small Capitals */
        {HZ_FEATURE_SMPL, HZ_TAG('s', 'm', 'p', 'l')}, /* Simplified Forms */
        /*  ss01 - ss20 Stylistic Sets */
        {HZ_FEATURE_SS01, HZ_TAG('s','s','0','1')},
        {HZ_FEATURE_SS02, HZ_TAG('s','s','0','2')},
        {HZ_FEATURE_SS03, HZ_TAG('s','s','0','3')},
        {HZ_FEATURE_SS04, HZ_TAG('s','s','0','4')},
        {HZ_FEATURE_SS05, HZ_TAG('s','s','0','5')},
        {HZ_FEATURE_SS06, HZ_TAG('s','s','0','6')},
        {HZ_FEATURE_SS07, HZ_TAG('s','s','0','7')},
        {HZ_FEATURE_SS08, HZ_TAG('s','s','0','8')},
        {HZ_FEATURE_SS09, HZ_TAG('s','s','0','9')},
        {HZ_FEATURE_SS10, HZ_TAG('s','s','1','0')},
        {HZ_FEATURE_SS11, HZ_TAG('s','s','1','1')},
        {HZ_FEATURE_SS12, HZ_TAG('s','s','1','2')},
        {HZ_FEATURE_SS13, HZ_TAG('s','s','1','3')},
        {HZ_FEATURE_SS14, HZ_TAG('s','s','1','4')},
        {HZ_FEATURE_SS15, HZ_TAG('s','s','1','5')},
        {HZ_FEATURE_SS16, HZ_TAG('s','s','1','6')},
        {HZ_FEATURE_SS17, HZ_TAG('s','s','1','7')},
        {HZ_FEATURE_SS18, HZ_TAG('s','s','1','8')},
        {HZ_FEATURE_SS19, HZ_TAG('s','s','1','9')},
        {HZ_FEATURE_SS20, HZ_TAG('s','s','2','0')},
        {HZ_FEATURE_SSTY, HZ_TAG('s', 's', 't', 'y')}, /* Math script style alternates */
        {HZ_FEATURE_STCH, HZ_TAG('s', 't', 'c', 'h')}, /* Stretching Glyph Decomposition */
        {HZ_FEATURE_SUBS, HZ_TAG('s', 'u', 'b', 's')}, /* Subscript */
        {HZ_FEATURE_SUPS, HZ_TAG('s', 'u', 'p', 's')}, /* Superscript */
        {HZ_FEATURE_SWSH, HZ_TAG('s', 'w', 's', 'h')}, /* Swash */
        {HZ_FEATURE_TITL, HZ_TAG('t', 'i', 't', 'l')}, /* Titling */
        {HZ_FEATURE_TJMO, HZ_TAG('t', 'j', 'm', 'o')}, /* Trailing Jamo Forms */
        {HZ_FEATURE_TNAM, HZ_TAG('t', 'n', 'a', 'm')}, /* Traditional Name Forms */
        {HZ_FEATURE_TNUM, HZ_TAG('t', 'n', 'u', 'm')}, /* Tabular Figures */
        {HZ_FEATURE_TRAD, HZ_TAG('t', 'r', 'a', 'd')}, /* Traditional Forms */
        {HZ_FEATURE_TWID, HZ_TAG('t', 'w', 'i', 'd')}, /* Third Widths */
        {HZ_FEATURE_UNIC, HZ_TAG('u', 'n', 'i', 'c')}, /* Unicase */
        {HZ_FEATURE_VALT, HZ_TAG('v', 'a', 'l', 't')}, /* Alternate Vertical Metrics */
        {HZ_FEATURE_VATU, HZ_TAG('v', 'a', 't', 'u')}, /* Vattu Variants */
        {HZ_FEATURE_VERT, HZ_TAG('v', 'e', 'r', 't')}, /* Vertical Writing */
        {HZ_FEATURE_VHAL, HZ_TAG('v', 'h', 'a', 'l')}, /* Alternate Vertical Half Metrics */
        {HZ_FEATURE_VJMO, HZ_TAG('v', 'j', 'm', 'o')}, /* Vowel Jamo Forms */
        {HZ_FEATURE_VKNA, HZ_TAG('v', 'k', 'n', 'a')}, /* Vertical Kana Alternates */
        {HZ_FEATURE_VKRN, HZ_TAG('v', 'k', 'r', 'n')}, /* Vertical Kerning */
        {HZ_FEATURE_VPAL, HZ_TAG('v', 'p', 'a', 'l')}, /* Proportional Alternate Vertical Metrics */
        {HZ_FEATURE_VRT2, HZ_TAG('v', 'r', 't', '2')}, /* Vertical Alternates and Rotation */
        {HZ_FEATURE_VRTR, HZ_TAG('v', 'r', 't', 'r')}, /* Vertical Alternates for Rotation */
        {HZ_FEATURE_ZERO, HZ_TAG('z', 'e', 'r', 'o')}, /* Slashed Zero */
};

static const hz_feature_info_t *
hz_ot_get_feature_info(hz_feature_t feature) {
    size_t i;

    for (i = 0; i < HZ_ARRLEN(HZ_FEATURE_INFO_LUT); ++i) {
        if (HZ_FEATURE_INFO_LUT[i].feature == feature) {
            return &HZ_FEATURE_INFO_LUT[i];
        }
    }

    return NULL;
}


typedef enum hz_script_t {
    HZ_SCRIPT_COMMON,
    HZ_SCRIPT_LATIN,
    HZ_SCRIPT_GREEK,
    HZ_SCRIPT_CYRILLIC,
    HZ_SCRIPT_ARMENIAN,
    HZ_SCRIPT_HEBREW,
    HZ_SCRIPT_ARABIC,
    HZ_SCRIPT_SYRIAC,
    HZ_SCRIPT_THAANA,
    HZ_SCRIPT_DEVANAGARI,
    HZ_SCRIPT_BENGALI,
    HZ_SCRIPT_GURMUKHI,
    HZ_SCRIPT_GUJARATI,
    HZ_SCRIPT_ORIYA,
    HZ_SCRIPT_TAMIL,
    HZ_SCRIPT_TELUGU,
    HZ_SCRIPT_KANNADA,
    HZ_SCRIPT_MALAYALAM,
    HZ_SCRIPT_ODIA,
    HZ_SCRIPT_SINHALA,
    HZ_SCRIPT_THAI,
    HZ_SCRIPT_LAO,
    HZ_SCRIPT_TIBETAN,
    HZ_SCRIPT_MYANMAR,
    HZ_SCRIPT_GEORGIAN,
    HZ_SCRIPT_HANGUL,
    HZ_SCRIPT_ETHIOPIC,
    HZ_SCRIPT_CHEROKEE,
    HZ_SCRIPT_CANADIAN_ABORIGINAL,
    HZ_SCRIPT_OGHAM,
    HZ_SCRIPT_RUNIC,
    HZ_SCRIPT_KHMER,
    HZ_SCRIPT_MONGOLIAN,
    HZ_SCRIPT_HIRAGANA,
    HZ_SCRIPT_KATAKANA,
    HZ_SCRIPT_BOPOMOFO,
    HZ_SCRIPT_HAN,
    HZ_SCRIPT_YI,
    HZ_SCRIPT_OLD_ITALIC,
    HZ_SCRIPT_GOTHIC,
    HZ_SCRIPT_DESERET,
    HZ_SCRIPT_INHERITED,
    HZ_SCRIPT_TAGALOG,
    HZ_SCRIPT_HANUNOO,
    HZ_SCRIPT_BUHID,
    HZ_SCRIPT_TAGBANWA,
    HZ_SCRIPT_LIMBU,
    HZ_SCRIPT_TAI_LE,
    HZ_SCRIPT_LINEAR_B,
    HZ_SCRIPT_UGARITIC,
    HZ_SCRIPT_SHAVIAN,
    HZ_SCRIPT_OSMANYA,
    HZ_SCRIPT_CYPRIOT,
    HZ_SCRIPT_BRAILLE,
    HZ_SCRIPT_BUGINESE,
    HZ_SCRIPT_COPTIC,
    HZ_SCRIPT_NEW_TAI_LUE,
    HZ_SCRIPT_GLAGOLITIC,
    HZ_SCRIPT_TIFINAGH,
    HZ_SCRIPT_SYLOTI_NAGRI,
    HZ_SCRIPT_OLD_PERSIAN,
    HZ_SCRIPT_KHAROSHTHI,
    HZ_SCRIPT_BALINESE,
    HZ_SCRIPT_CUNEIFORM,
    HZ_SCRIPT_PHOENICIAN,
    HZ_SCRIPT_PHAGS_PA,
    HZ_SCRIPT_NKO,
    HZ_SCRIPT_SUNDANESE,
    HZ_SCRIPT_LEPCHA,
    HZ_SCRIPT_OL_CHIKI,
    HZ_SCRIPT_VAI,
    HZ_SCRIPT_SAURASHTRA,
    HZ_SCRIPT_KAYAH_LI,
    HZ_SCRIPT_REJANG,
    HZ_SCRIPT_LYCIAN,
    HZ_SCRIPT_CARIAN,
    HZ_SCRIPT_LYDIAN,
    HZ_SCRIPT_CHAM,
    HZ_SCRIPT_TAI_THAM,
    HZ_SCRIPT_TAI_VIET,
    HZ_SCRIPT_AVESTAN,
    HZ_SCRIPT_EGYPTIAN_HIEROGLYPHS,
    HZ_SCRIPT_SAMARITAN,
    HZ_SCRIPT_LISU,
    HZ_SCRIPT_BAMUM,
    HZ_SCRIPT_JAVANESE,
    HZ_SCRIPT_MEETEI_MAYEK,
    HZ_SCRIPT_IMPERIAL_ARAMAIC,
    HZ_SCRIPT_OLD_SOUTH_ARABIAN,
    HZ_SCRIPT_INSCRIPTIONAL_PARTHIAN,
    HZ_SCRIPT_INSCRIPTIONAL_PAHLAVI,
    HZ_SCRIPT_OLD_TURKIC,
    HZ_SCRIPT_KAITHI,
    HZ_SCRIPT_BATAK,
    HZ_SCRIPT_BRAHMI,
    HZ_SCRIPT_MANDAIC,
    HZ_SCRIPT_CHAKMA,
    HZ_SCRIPT_MEROITIC_CURSIVE,
    HZ_SCRIPT_MEROITIC_HIEROGLYPHS,
    HZ_SCRIPT_MIAO,
    HZ_SCRIPT_SHARADA,
    HZ_SCRIPT_SORA_SOMPENG,
    HZ_SCRIPT_TAKRI,
    HZ_SCRIPT_CAUCASIAN_ALBANIAN,
    HZ_SCRIPT_BASSA_VAH,
    HZ_SCRIPT_DUPLOYAN,
    HZ_SCRIPT_ELBASAN,
    HZ_SCRIPT_GRANTHA,
    HZ_SCRIPT_PAHAWH_HMONG,
    HZ_SCRIPT_KHOJKI,
    HZ_SCRIPT_LINEAR_A,
    HZ_SCRIPT_MAHAJANI,
    HZ_SCRIPT_MANICHAEAN,
    HZ_SCRIPT_MENDE_KIKAKUI,
    HZ_SCRIPT_MODI,
    HZ_SCRIPT_MRO,
    HZ_SCRIPT_OLD_NORTH_ARABIAN,
    HZ_SCRIPT_NABATAEAN,
    HZ_SCRIPT_PALMYRENE,
    HZ_SCRIPT_PAU_CIN_HAU,
    HZ_SCRIPT_OLD_PERMIC,
    HZ_SCRIPT_PSALTER_PAHLAVI,
    HZ_SCRIPT_SIDDHAM,
    HZ_SCRIPT_KHUDAWADI,
    HZ_SCRIPT_TIRHUTA,
    HZ_SCRIPT_WARANG_CITI,
    HZ_SCRIPT_AHOM,
    HZ_SCRIPT_ANATOLIAN_HIEROGLYPHS,
    HZ_SCRIPT_HATRAN,
    HZ_SCRIPT_MULTANI,
    HZ_SCRIPT_OLD_HUNGARIAN,
    HZ_SCRIPT_SIGNWRITING,
    HZ_SCRIPT_ADLAM,
    HZ_SCRIPT_BHAIKSUKI,
    HZ_SCRIPT_MARCHEN,
    HZ_SCRIPT_NEWA,
    HZ_SCRIPT_OSAGE,
    HZ_SCRIPT_TANGUT,
    HZ_SCRIPT_MASARAM_GONDI,
    HZ_SCRIPT_NUSHU,
    HZ_SCRIPT_SOYOMBO,
    HZ_SCRIPT_ZANABAZAR_SQUARE,
    HZ_SCRIPT_DOGRA,
    HZ_SCRIPT_GUNJALA_GONDI,
    HZ_SCRIPT_MAKASAR,
    HZ_SCRIPT_MEDEFAIDRIN,
    HZ_SCRIPT_HANIFI_ROHINGYA,
    HZ_SCRIPT_SOGDIAN,
    HZ_SCRIPT_OLD_SOGDIAN,
    HZ_SCRIPT_ELYMAIC,
    HZ_SCRIPT_NANDINAGARI,
    HZ_SCRIPT_NYIAKENG_PUACHUE_HMONG,
    HZ_SCRIPT_WANCHO,
    HZ_SCRIPT_CHORASMIAN,
    HZ_SCRIPT_DIVES_AKURU,
    HZ_SCRIPT_KHITAN_SMALL_SCRIPT,
    HZ_SCRIPT_YEZIDI
} hz_script_t;

/* Arabic joining */
typedef enum hz_arabic_joining_type_t {
    JOINING_TYPE_R = 0x0100, /* Right-Joining */
    JOINING_TYPE_L = 0x0200, /* Left-Joining */
    JOINING_TYPE_D = 0x0400, /* Dual-Joining */
    JOINING_TYPE_C = 0x0800, /* Join-Causing */
    JOINING_TYPE_U = 0x1000, /* Non-Joining */
    JOINING_TYPE_T = 0x2000  /* Transparent */
} hz_arabic_joining_type_t;

typedef enum hz_arabic_joining_group_t {
    /* Arabic */
    NO_JOINING_GROUP = 0,
    JOINING_GROUP_ALEF = 1,
    JOINING_GROUP_TEH_MARBUTA,
    JOINING_GROUP_TEH_MARBUTA_GOAL,
    JOINING_GROUP_DAL,
    JOINING_GROUP_REH,
    JOINING_GROUP_WAW,
    JOINING_GROUP_STRAIGHT_WAW,
    JOINING_GROUP_YEH_WITH_TAIL,
    JOINING_GROUP_YEH_BARREE,
    JOINING_GROUP_ROHINGYA_YEH,
    JOINING_GROUP_BEH,
    JOINING_GROUP_HAH,
    JOINING_GROUP_SEEN,
    JOINING_GROUP_SAD,
    JOINING_GROUP_TAH,
    JOINING_GROUP_AIN,
    JOINING_GROUP_FEH,
    JOINING_GROUP_QAF,
    JOINING_GROUP_KAF,
    JOINING_GROUP_LAM,
    JOINING_GROUP_MEEM,
    JOINING_GROUP_NOON,
    JOINING_GROUP_HEH,
    JOINING_GROUP_YEH,
    JOINING_GROUP_SWASH_KAF,
    JOINING_GROUP_GAF,
    JOINING_GROUP_NYA,
    JOINING_GROUP_KNOTTED_HEH,
    JOINING_GROUP_HEH_GOAL,
    JOINING_GROUP_FARSI_YEH,
    JOINING_GROUP_BURUSHASKI_YEH_BARREE,
    JOINING_GROUP_AFRICAN_FEH,
    JOINING_GROUP_AFRICAN_QAF,
    JOINING_GROUP_AFRICAN_NOON,

    /* Syriac */
    JOINING_GROUP_ALAPH,
    JOINING_GROUP_BETH,
    JOINING_GROUP_GAMAL,
    JOINING_GROUP_DALATH_RISH,
    JOINING_GROUP_HE,
    JOINING_GROUP_SYRIAC_WAW,
    JOINING_GROUP_ZAIN,
    JOINING_GROUP_HETH,
    JOINING_GROUP_TETH,
    JOINING_GROUP_YUDH,
    JOINING_GROUP_YUDH_HE,
    JOINING_GROUP_KAPH,
    JOINING_GROUP_LAMADH,
    JOINING_GROUP_MIM,
    JOINING_GROUP_NUN,
    JOINING_GROUP_SEMKATH,
    JOINING_GROUP_FINAL_SEMKATH,
    JOINING_GROUP_E,
    JOINING_GROUP_PE,
    JOINING_GROUP_REVERSED_PE,
    JOINING_GROUP_SADHE,
    JOINING_GROUP_QAPH,
    JOINING_GROUP_SHIN,
    JOINING_GROUP_TAW,
    JOINING_GROUP_ZHAIN,
    JOINING_GROUP_KHAPH,
    JOINING_GROUP_FE,

    /* Malayalam */
    JOINING_GROUP_MALAYALAM_NGA,
    JOINING_GROUP_MALAYALAM_JA,
    JOINING_GROUP_MALAYALAM_NYA,
    JOINING_GROUP_MALAYALAM_TTA,
    JOINING_GROUP_MALAYALAM_NNA,
    JOINING_GROUP_MALAYALAM_NNNA,
    JOINING_GROUP_MALAYALAM_BHA,
    JOINING_GROUP_MALAYALAM_RA,
    JOINING_GROUP_MALAYALAM_LLA,
    JOINING_GROUP_MALAYALAM_LLLA,
    JOINING_GROUP_MALAYALAM_SSA,

    /* Manichaean */
    JOINING_GROUP_MANICHAEAN_ALEPH,
    JOINING_GROUP_MANICHAEAN_BETH,
    JOINING_GROUP_MANICHAEAN_GIMEL,
    JOINING_GROUP_MANICHAEAN_DALETH,
    JOINING_GROUP_MANICHAEAN_WAW,
    JOINING_GROUP_MANICHAEAN_ZAYIN,
    JOINING_GROUP_MANICHAEAN_HETH,
    JOINING_GROUP_MANICHAEAN_TETH,
    JOINING_GROUP_MANICHAEAN_YODH,
    JOINING_GROUP_MANICHAEAN_KAPH,
    JOINING_GROUP_MANICHAEAN_LAMEDH,
    JOINING_GROUP_MANICHAEAN_DHAMEDH,
    JOINING_GROUP_MANICHAEAN_THAMEDH,
    JOINING_GROUP_MANICHAEAN_MEM,
    JOINING_GROUP_MANICHAEAN_NUN,
    JOINING_GROUP_MANICHAEAN_SAMEKH,
    JOINING_GROUP_MANICHAEAN_AYIN,
    JOINING_GROUP_MANICHAEAN_PE,
    JOINING_GROUP_MANICHAEAN_SADHE,
    JOINING_GROUP_MANICHAEAN_QOPH,
    JOINING_GROUP_MANICHAEAN_RESH,
    JOINING_GROUP_MANICHAEAN_TAW,
    JOINING_GROUP_MANICHAEAN_ONE,
    JOINING_GROUP_MANICHAEAN_FIVE,
    JOINING_GROUP_MANICHAEAN_TEN,
    JOINING_GROUP_MANICHAEAN_TWENTY,
    JOINING_GROUP_MANICHAEAN_HUNDRED,

    /* Rohingya */
    JOINING_GROUP_HANIFI_ROHINGYA_PA,
    JOINING_GROUP_HANIFI_ROHINGYA_KINNA_YA
} hz_arabic_joining_group_t;

typedef struct hz_arabic_joining_entry_t {
    hz_unicode_t codepoint;
    const char *name;
    uint16_t joining;
} hz_arabic_joining_entry_t;

static const hz_arabic_joining_entry_t hz_arabic_joining_list[] = {
    { 0x0600, "ARABIC NUMBER SIGN", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x0601, "ARABIC SIGN SANAH", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x0602, "ARABIC FOOTNOTE MARKER", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x0603, "ARABIC SIGN SAFHA", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x0604, "ARABIC SIGN SAMVAT", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x0605, "ARABIC NUMBER MARK ABOVE", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x0608, "ARABIC RAY", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x060B, "AFGHANI SIGN", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x0620, "DOTLESS YEH WITH SEPARATE RING BELOW", JOINING_TYPE_D | JOINING_GROUP_YEH },
    { 0x0621, "HAMZA", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x0622, "ALEF WITH MADDA ABOVE", JOINING_TYPE_R | JOINING_GROUP_ALEF },
    { 0x0623, "ALEF WITH HAMZA ABOVE", JOINING_TYPE_R | JOINING_GROUP_ALEF },
    { 0x0624, "WAW WITH HAMZA ABOVE", JOINING_TYPE_R | JOINING_GROUP_WAW },
    { 0x0625, "ALEF WITH HAMZA BELOW", JOINING_TYPE_R | JOINING_GROUP_ALEF },
    { 0x0626, "DOTLESS YEH WITH HAMZA ABOVE", JOINING_TYPE_D | JOINING_GROUP_YEH },
    { 0x0627, "ALEF", JOINING_TYPE_R | JOINING_GROUP_ALEF },
    { 0x0628, "BEH", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x0629, "TEH MARBUTA", JOINING_TYPE_R | JOINING_GROUP_TEH_MARBUTA },
    { 0x062A, "DOTLESS BEH WITH 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x062B, "DOTLESS BEH WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x062C, "HAH WITH DOT BELOW", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x062D, "HAH", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x062E, "HAH WITH DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x062F, "DAL", JOINING_TYPE_R | JOINING_GROUP_DAL },
    { 0x0630, "DAL WITH DOT ABOVE", JOINING_TYPE_R | JOINING_GROUP_DAL },
    { 0x0631, "REH", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x0632, "REH WITH DOT ABOVE", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x0633, "SEEN", JOINING_TYPE_D | JOINING_GROUP_SEEN },
    { 0x0634, "SEEN WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_SEEN },
    { 0x0635, "SAD", JOINING_TYPE_D | JOINING_GROUP_SAD },
    { 0x0636, "SAD WITH DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_SAD },
    { 0x0637, "TAH", JOINING_TYPE_D | JOINING_GROUP_TAH },
    { 0x0638, "TAH WITH DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_TAH },
    { 0x0639, "AIN", JOINING_TYPE_D | JOINING_GROUP_AIN },
    { 0x063A, "AIN WITH DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_AIN },
    { 0x063B, "KEHEH WITH 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_GAF },
    { 0x063C, "KEHEH WITH 3 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_GAF },
    { 0x063D, "FARSI YEH WITH INVERTED V ABOVE", JOINING_TYPE_D | JOINING_GROUP_FARSI_YEH },
    { 0x063E, "FARSI YEH WITH 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_FARSI_YEH },
    { 0x063F, "FARSI YEH WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_FARSI_YEH },
    { 0x0640, "TATWEEL", JOINING_TYPE_C | NO_JOINING_GROUP },
    { 0x0641, "FEH", JOINING_TYPE_D | JOINING_GROUP_FEH },
    { 0x0642, "QAF", JOINING_TYPE_D | JOINING_GROUP_QAF },
    { 0x0643, "KAF", JOINING_TYPE_D | JOINING_GROUP_KAF },
    { 0x0644, "LAM", JOINING_TYPE_D | JOINING_GROUP_LAM },
    { 0x0645, "MEEM", JOINING_TYPE_D | JOINING_GROUP_MEEM },
    { 0x0646, "NOON", JOINING_TYPE_D | JOINING_GROUP_NOON },
    { 0x0647, "HEH", JOINING_TYPE_D | JOINING_GROUP_HEH },
    { 0x0648, "WAW", JOINING_TYPE_R | JOINING_GROUP_WAW },
    { 0x0649, "DOTLESS YEH", JOINING_TYPE_D | JOINING_GROUP_YEH },
    { 0x064A, "YEH", JOINING_TYPE_D | JOINING_GROUP_YEH },
    { 0x066E, "DOTLESS BEH", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x066F, "DOTLESS QAF", JOINING_TYPE_D | JOINING_GROUP_QAF },
    { 0x0671, "ALEF WITH WASLA ABOVE", JOINING_TYPE_R | JOINING_GROUP_ALEF },
    { 0x0672, "ALEF WITH WAVY HAMZA ABOVE", JOINING_TYPE_R | JOINING_GROUP_ALEF },
    { 0x0673, "ALEF WITH WAVY HAMZA BELOW", JOINING_TYPE_R | JOINING_GROUP_ALEF },
    { 0x0674, "HIGH HAMZA", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x0675, "HIGH HAMZA ALEF", JOINING_TYPE_R | JOINING_GROUP_ALEF },
    { 0x0676, "HIGH HAMZA WAW", JOINING_TYPE_R | JOINING_GROUP_WAW },
    { 0x0677, "HIGH HAMZA WAW WITH DAMMA ABOVE", JOINING_TYPE_R | JOINING_GROUP_WAW },
    { 0x0678, "HIGH HAMZA DOTLESS YEH", JOINING_TYPE_D | JOINING_GROUP_YEH },
    { 0x0679, "DOTLESS BEH WITH TAH ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x067A, "DOTLESS BEH WITH VERTICAL 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x067B, "DOTLESS BEH WITH VERTICAL 2 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x067C, "DOTLESS BEH WITH ATTACHED RING BELOW AND 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x067D, "DOTLESS BEH WITH INVERTED 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x067E, "DOTLESS BEH WITH 3 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x067F, "DOTLESS BEH WITH 4 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x0680, "DOTLESS BEH WITH 4 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x0681, "HAH WITH HAMZA ABOVE", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x0682, "HAH WITH VERTICAL 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x0683, "HAH WITH 2 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x0684, "HAH WITH VERTICAL 2 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x0685, "HAH WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x0686, "HAH WITH 3 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x0687, "HAH WITH 4 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x0688, "DAL WITH TAH ABOVE", JOINING_TYPE_R | JOINING_GROUP_DAL },
    { 0x0689, "DAL WITH ATTACHED RING BELOW", JOINING_TYPE_R | JOINING_GROUP_DAL },
    { 0x068A, "DAL WITH DOT BELOW", JOINING_TYPE_R | JOINING_GROUP_DAL },
    { 0x068B, "DAL WITH DOT BELOW AND TAH ABOVE", JOINING_TYPE_R | JOINING_GROUP_DAL },
    { 0x068C, "DAL WITH 2 DOTS ABOVE", JOINING_TYPE_R | JOINING_GROUP_DAL },
    { 0x068D, "DAL WITH 2 DOTS BELOW", JOINING_TYPE_R | JOINING_GROUP_DAL },
    { 0x068E, "DAL WITH 3 DOTS ABOVE", JOINING_TYPE_R | JOINING_GROUP_DAL },
    { 0x068F, "DAL WITH INVERTED 3 DOTS ABOVE", JOINING_TYPE_R | JOINING_GROUP_DAL },
    { 0x0690, "DAL WITH 4 DOTS ABOVE", JOINING_TYPE_R | JOINING_GROUP_DAL },
    { 0x0691, "REH WITH TAH ABOVE", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x0692, "REH WITH V ABOVE", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x0693, "REH WITH ATTACHED RING BELOW", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x0694, "REH WITH DOT BELOW", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x0695, "REH WITH V BELOW", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x0696, "REH WITH DOT BELOW AND DOT WITHIN", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x0697, "REH WITH 2 DOTS ABOVE", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x0698, "REH WITH 3 DOTS ABOVE", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x0699, "REH WITH 4 DOTS ABOVE", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x069A, "SEEN WITH DOT BELOW AND DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_SEEN },
    { 0x069B, "SEEN WITH 3 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_SEEN },
    { 0x069C, "SEEN WITH 3 DOTS BELOW AND 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_SEEN },
    { 0x069D, "SAD WITH 2 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_SAD },
    { 0x069E, "SAD WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_SAD },
    { 0x069F, "TAH WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_TAH },
    { 0x06A0, "AIN WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_AIN },
    { 0x06A1, "DOTLESS FEH", JOINING_TYPE_D | JOINING_GROUP_FEH },
    { 0x06A2, "DOTLESS FEH WITH DOT BELOW", JOINING_TYPE_D | JOINING_GROUP_FEH },
    { 0x06A3, "FEH WITH DOT BELOW", JOINING_TYPE_D | JOINING_GROUP_FEH },
    { 0x06A4, "DOTLESS FEH WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_FEH },
    { 0x06A5, "DOTLESS FEH WITH 3 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_FEH },
    { 0x06A6, "DOTLESS FEH WITH 4 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_FEH },
    { 0x06A7, "DOTLESS QAF WITH DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_QAF },
    { 0x06A8, "DOTLESS QAF WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_QAF },
    { 0x06A9, "KEHEH", JOINING_TYPE_D | JOINING_GROUP_GAF },
    { 0x06AA, "SWASH KAF", JOINING_TYPE_D | JOINING_GROUP_SWASH_KAF },
    { 0x06AB, "KEHEH WITH ATTACHED RING BELOW", JOINING_TYPE_D | JOINING_GROUP_GAF },
    { 0x06AC, "KAF WITH DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_KAF },
    { 0x06AD, "KAF WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_KAF },
    { 0x06AE, "KAF WITH 3 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_KAF },
    { 0x06AF, "GAF", JOINING_TYPE_D | JOINING_GROUP_GAF },
    { 0x06B0, "GAF WITH ATTACHED RING BELOW", JOINING_TYPE_D | JOINING_GROUP_GAF },
    { 0x06B1, "GAF WITH 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_GAF },
    { 0x06B2, "GAF WITH 2 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_GAF },
    { 0x06B3, "GAF WITH VERTICAL 2 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_GAF },
    { 0x06B4, "GAF WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_GAF },
    { 0x06B5, "LAM WITH V ABOVE", JOINING_TYPE_D | JOINING_GROUP_LAM },
    { 0x06B6, "LAM WITH DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_LAM },
    { 0x06B7, "LAM WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_LAM },
    { 0x06B8, "LAM WITH 3 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_LAM },
    { 0x06B9, "NOON WITH DOT BELOW", JOINING_TYPE_D | JOINING_GROUP_NOON },
    { 0x06BA, "DOTLESS NOON", JOINING_TYPE_D | JOINING_GROUP_NOON },
    { 0x06BB, "DOTLESS NOON WITH TAH ABOVE", JOINING_TYPE_D | JOINING_GROUP_NOON },
    { 0x06BC, "NOON WITH ATTACHED RING BELOW", JOINING_TYPE_D | JOINING_GROUP_NOON },
    { 0x06BD, "NYA", JOINING_TYPE_D | JOINING_GROUP_NYA },
    { 0x06BE, "KNOTTED HEH", JOINING_TYPE_D | JOINING_GROUP_KNOTTED_HEH },
    { 0x06BF, "HAH WITH 3 DOTS BELOW AND DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x06C0, "DOTLESS TEH MARBUTA WITH HAMZA ABOVE", JOINING_TYPE_R | JOINING_GROUP_TEH_MARBUTA },
    { 0x06C1, "HEH GOAL", JOINING_TYPE_D | JOINING_GROUP_HEH_GOAL },
    { 0x06C2, "HEH GOAL WITH HAMZA ABOVE", JOINING_TYPE_D | JOINING_GROUP_HEH_GOAL },
    { 0x06C3, "TEH MARBUTA GOAL", JOINING_TYPE_R | JOINING_GROUP_TEH_MARBUTA_GOAL },
    { 0x06C4, "WAW WITH ATTACHED RING WITHIN", JOINING_TYPE_R | JOINING_GROUP_WAW },
    { 0x06C5, "WAW WITH BAR", JOINING_TYPE_R | JOINING_GROUP_WAW },
    { 0x06C6, "WAW WITH V ABOVE", JOINING_TYPE_R | JOINING_GROUP_WAW },
    { 0x06C7, "WAW WITH DAMMA ABOVE", JOINING_TYPE_R | JOINING_GROUP_WAW },
    { 0x06C8, "WAW WITH ALEF ABOVE", JOINING_TYPE_R | JOINING_GROUP_WAW },
    { 0x06C9, "WAW WITH INVERTED V ABOVE", JOINING_TYPE_R | JOINING_GROUP_WAW },
    { 0x06CA, "WAW WITH 2 DOTS ABOVE", JOINING_TYPE_R | JOINING_GROUP_WAW },
    { 0x06CB, "WAW WITH 3 DOTS ABOVE", JOINING_TYPE_R | JOINING_GROUP_WAW },
    { 0x06CC, "FARSI YEH", JOINING_TYPE_D | JOINING_GROUP_FARSI_YEH },
    { 0x06CD, "YEH WITH TAIL", JOINING_TYPE_R | JOINING_GROUP_YEH_WITH_TAIL },
    { 0x06CE, "FARSI YEH WITH V ABOVE", JOINING_TYPE_D | JOINING_GROUP_FARSI_YEH },
    { 0x06CF, "WAW WITH DOT ABOVE", JOINING_TYPE_R | JOINING_GROUP_WAW },
    { 0x06D0, "DOTLESS YEH WITH VERTICAL 2 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_YEH },
    { 0x06D1, "DOTLESS YEH WITH 3 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_YEH },
    { 0x06D2, "YEH BARREE", JOINING_TYPE_R | JOINING_GROUP_YEH_BARREE },
    { 0x06D3, "YEH BARREE WITH HAMZA ABOVE", JOINING_TYPE_R | JOINING_GROUP_YEH_BARREE },
    { 0x06D5, "DOTLESS TEH MARBUTA", JOINING_TYPE_R | JOINING_GROUP_TEH_MARBUTA },
    { 0x06DD, "ARABIC END OF AYAH", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x06EE, "DAL WITH INVERTED V ABOVE", JOINING_TYPE_R | JOINING_GROUP_DAL },
    { 0x06EF, "REH WITH INVERTED V ABOVE", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x06FA, "SEEN WITH DOT BELOW AND 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_SEEN },
    { 0x06FB, "SAD WITH DOT BELOW AND DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_SAD },
    { 0x06FC, "AIN WITH DOT BELOW AND DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_AIN },
    { 0x06FF, "KNOTTED HEH WITH INVERTED V ABOVE", JOINING_TYPE_D | JOINING_GROUP_KNOTTED_HEH },
    { 0x070F, "SYRIAC ABBREVIATION MARK", JOINING_TYPE_T | NO_JOINING_GROUP },
    { 0x0710, "ALAPH", JOINING_TYPE_R | JOINING_GROUP_ALAPH },
    { 0x0712, "BETH", JOINING_TYPE_D | JOINING_GROUP_BETH },
    { 0x0713, "GAMAL", JOINING_TYPE_D | JOINING_GROUP_GAMAL },
    { 0x0714, "GAMAL GARSHUNI", JOINING_TYPE_D | JOINING_GROUP_GAMAL },
    { 0x0715, "DALATH", JOINING_TYPE_R | JOINING_GROUP_DALATH_RISH },
    { 0x0716, "DOTLESS DALATH RISH", JOINING_TYPE_R | JOINING_GROUP_DALATH_RISH },
    { 0x0717, "HE", JOINING_TYPE_R | JOINING_GROUP_HE },
    { 0x0718, "WAW", JOINING_TYPE_R | JOINING_GROUP_SYRIAC_WAW },
    { 0x0719, "ZAIN", JOINING_TYPE_R | JOINING_GROUP_ZAIN },
    { 0x071A, "HETH", JOINING_TYPE_D | JOINING_GROUP_HETH },
    { 0x071B, "TETH", JOINING_TYPE_D | JOINING_GROUP_TETH },
    { 0x071C, "TETH GARSHUNI", JOINING_TYPE_D | JOINING_GROUP_TETH },
    { 0x071D, "YUDH", JOINING_TYPE_D | JOINING_GROUP_YUDH },
    { 0x071E, "YUDH HE", JOINING_TYPE_R | JOINING_GROUP_YUDH_HE },
    { 0x071F, "KAPH", JOINING_TYPE_D | JOINING_GROUP_KAPH },
    { 0x0720, "LAMADH", JOINING_TYPE_D | JOINING_GROUP_LAMADH },
    { 0x0721, "MIM", JOINING_TYPE_D | JOINING_GROUP_MIM },
    { 0x0722, "NUN", JOINING_TYPE_D | JOINING_GROUP_NUN },
    { 0x0723, "SEMKATH", JOINING_TYPE_D | JOINING_GROUP_SEMKATH },
    { 0x0724, "FINAL SEMKATH", JOINING_TYPE_D | JOINING_GROUP_FINAL_SEMKATH },
    { 0x0725, "E", JOINING_TYPE_D | JOINING_GROUP_E },
    { 0x0726, "PE", JOINING_TYPE_D | JOINING_GROUP_PE },
    { 0x0727, "REVERSED PE", JOINING_TYPE_D | JOINING_GROUP_REVERSED_PE },
    { 0x0728, "SADHE", JOINING_TYPE_R | JOINING_GROUP_SADHE },
    { 0x0729, "QAPH", JOINING_TYPE_D | JOINING_GROUP_QAPH },
    { 0x072A, "RISH", JOINING_TYPE_R | JOINING_GROUP_DALATH_RISH },
    { 0x072B, "SHIN", JOINING_TYPE_D | JOINING_GROUP_SHIN },
    { 0x072C, "TAW", JOINING_TYPE_R | JOINING_GROUP_TAW },
    { 0x072D, "PERSIAN BHETH", JOINING_TYPE_D | JOINING_GROUP_BETH },
    { 0x072E, "PERSIAN GHAMAL", JOINING_TYPE_D | JOINING_GROUP_GAMAL },
    { 0x072F, "PERSIAN DHALATH", JOINING_TYPE_R | JOINING_GROUP_DALATH_RISH },
    { 0x074D, "SOGDIAN ZHAIN", JOINING_TYPE_R | JOINING_GROUP_ZHAIN },
    { 0x074E, "SOGDIAN KHAPH", JOINING_TYPE_D | JOINING_GROUP_KHAPH },
    { 0x074F, "SOGDIAN FE", JOINING_TYPE_D | JOINING_GROUP_FE },
    { 0x0750, "DOTLESS BEH WITH HORIZONTAL 3 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x0751, "BEH WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x0752, "DOTLESS BEH WITH INVERTED 3 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x0753, "DOTLESS BEH WITH INVERTED 3 DOTS BELOW AND 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x0754, "DOTLESS BEH WITH 2 DOTS BELOW AND DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x0755, "DOTLESS BEH WITH INVERTED V BELOW", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x0756, "DOTLESS BEH WITH V ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x0757, "HAH WITH 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x0758, "HAH WITH INVERTED 3 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x0759, "DAL WITH VERTICAL 2 DOTS BELOW AND TAH ABOVE", JOINING_TYPE_R | JOINING_GROUP_DAL },
    { 0x075A, "DAL WITH INVERTED V BELOW", JOINING_TYPE_R | JOINING_GROUP_DAL },
    { 0x075B, "REH WITH BAR", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x075C, "SEEN WITH 4 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_SEEN },
    { 0x075D, "AIN WITH 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_AIN },
    { 0x075E, "AIN WITH INVERTED 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_AIN },
    { 0x075F, "AIN WITH VERTICAL 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_AIN },
    { 0x0760, "DOTLESS FEH WITH 2 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_FEH },
    { 0x0761, "DOTLESS FEH WITH INVERTED 3 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_FEH },
    { 0x0762, "KEHEH WITH DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_GAF },
    { 0x0763, "KEHEH WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_GAF },
    { 0x0764, "KEHEH WITH INVERTED 3 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_GAF },
    { 0x0765, "MEEM WITH DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_MEEM },
    { 0x0766, "MEEM WITH DOT BELOW", JOINING_TYPE_D | JOINING_GROUP_MEEM },
    { 0x0767, "NOON WITH 2 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_NOON },
    { 0x0768, "NOON WITH TAH ABOVE", JOINING_TYPE_D | JOINING_GROUP_NOON },
    { 0x0769, "NOON WITH V ABOVE", JOINING_TYPE_D | JOINING_GROUP_NOON },
    { 0x076A, "LAM WITH BAR", JOINING_TYPE_D | JOINING_GROUP_LAM },
    { 0x076B, "REH WITH VERTICAL 2 DOTS ABOVE", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x076C, "REH WITH HAMZA ABOVE", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x076D, "SEEN WITH VERTICAL 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_SEEN },
    { 0x076E, "HAH WITH TAH BELOW", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x076F, "HAH WITH TAH AND 2 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x0770, "SEEN WITH 2 DOTS AND TAH ABOVE", JOINING_TYPE_D | JOINING_GROUP_SEEN },
    { 0x0771, "REH WITH 2 DOTS AND TAH ABOVE", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x0772, "HAH WITH TAH ABOVE", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x0773, "ALEF WITH DIGIT TWO ABOVE", JOINING_TYPE_R | JOINING_GROUP_ALEF },
    { 0x0774, "ALEF WITH DIGIT THREE ABOVE", JOINING_TYPE_R | JOINING_GROUP_ALEF },
    { 0x0775, "FARSI YEH WITH DIGIT TWO ABOVE", JOINING_TYPE_D | JOINING_GROUP_FARSI_YEH },
    { 0x0776, "FARSI YEH WITH DIGIT THREE ABOVE", JOINING_TYPE_D | JOINING_GROUP_FARSI_YEH },
    { 0x0777, "DOTLESS YEH WITH DIGIT FOUR BELOW", JOINING_TYPE_D | JOINING_GROUP_YEH },
    { 0x0778, "WAW WITH DIGIT TWO ABOVE", JOINING_TYPE_R | JOINING_GROUP_WAW },
    { 0x0779, "WAW WITH DIGIT THREE ABOVE", JOINING_TYPE_R | JOINING_GROUP_WAW },
    { 0x077A, "BURUSHASKI YEH BARREE WITH DIGIT TWO ABOVE", JOINING_TYPE_D | JOINING_GROUP_BURUSHASKI_YEH_BARREE },
    { 0x077B, "BURUSHASKI YEH BARREE WITH DIGIT THREE ABOVE", JOINING_TYPE_D | JOINING_GROUP_BURUSHASKI_YEH_BARREE },
    { 0x077C, "HAH WITH DIGIT FOUR BELOW", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x077D, "SEEN WITH DIGIT FOUR ABOVE", JOINING_TYPE_D | JOINING_GROUP_SEEN },
    { 0x077E, "SEEN WITH INVERTED V ABOVE", JOINING_TYPE_D | JOINING_GROUP_SEEN },
    { 0x077F, "KAF WITH 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_KAF },
    { 0x07CA, "NKO A", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07CB, "NKO EE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07CC, "NKO I", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07CD, "NKO E", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07CE, "NKO U", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07CF, "NKO OO", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07D0, "NKO O", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07D1, "NKO DAGBASINNA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07D2, "NKO N", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07D3, "NKO BA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07D4, "NKO PA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07D5, "NKO TA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07D6, "NKO JA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07D7, "NKO CHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07D8, "NKO DA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07D9, "NKO RA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07DA, "NKO RRA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07DB, "NKO SA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07DC, "NKO GBA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07DD, "NKO FA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07DE, "NKO KA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07DF, "NKO LA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07E0, "NKO NA WOLOSO", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07E1, "NKO MA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07E2, "NKO NYA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07E3, "NKO NA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07E4, "NKO HA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07E5, "NKO WA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07E6, "NKO YA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07E7, "NKO NYA WOLOSO", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07E8, "NKO JONA JA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07E9, "NKO JONA CHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07EA, "NKO JONA RA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x07FA, "NKO LAJANYALAN", JOINING_TYPE_C | NO_JOINING_GROUP },
    { 0x0840, "MANDAIC HALQA", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x0841, "MANDAIC AB", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x0842, "MANDAIC AG", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x0843, "MANDAIC AD", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x0844, "MANDAIC AH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x0845, "MANDAIC USHENNA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x0846, "MANDAIC AZ", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x0847, "MANDAIC IT", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x0848, "MANDAIC ATT", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x0849, "MANDAIC AKSA", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x084A, "MANDAIC AK", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x084B, "MANDAIC AL", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x084C, "MANDAIC AM", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x084D, "MANDAIC AN", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x084E, "MANDAIC AS", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x084F, "MANDAIC IN", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x0850, "MANDAIC AP", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x0851, "MANDAIC ASZ", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x0852, "MANDAIC AQ", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x0853, "MANDAIC AR", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x0854, "MANDAIC ASH", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x0855, "MANDAIC AT", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x0856, "MANDAIC DUSHENNA", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x0857, "MANDAIC KAD", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x0858, "MANDAIC AIN", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x0860, "MALAYALAM NGA", JOINING_TYPE_D | JOINING_GROUP_MALAYALAM_NGA },
    { 0x0861, "MALAYALAM JA", JOINING_TYPE_U | JOINING_GROUP_MALAYALAM_JA },
    { 0x0862, "MALAYALAM NYA", JOINING_TYPE_D | JOINING_GROUP_MALAYALAM_NYA },
    { 0x0863, "MALAYALAM TTA", JOINING_TYPE_D | JOINING_GROUP_MALAYALAM_TTA },
    { 0x0864, "MALAYALAM NNA", JOINING_TYPE_D | JOINING_GROUP_MALAYALAM_NNA },
    { 0x0865, "MALAYALAM NNNA", JOINING_TYPE_D | JOINING_GROUP_MALAYALAM_NNNA },
    { 0x0866, "MALAYALAM BHA", JOINING_TYPE_U | JOINING_GROUP_MALAYALAM_BHA },
    { 0x0867, "MALAYALAM RA", JOINING_TYPE_R | JOINING_GROUP_MALAYALAM_RA },
    { 0x0868, "MALAYALAM LLA", JOINING_TYPE_D | JOINING_GROUP_MALAYALAM_LLA },
    { 0x0869, "MALAYALAM LLLA", JOINING_TYPE_R | JOINING_GROUP_MALAYALAM_LLLA },
    { 0x086A, "MALAYALAM SSA", JOINING_TYPE_R | JOINING_GROUP_MALAYALAM_SSA },
    { 0x08A0, "DOTLESS BEH WITH V BELOW", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x08A1, "BEH WITH HAMZA ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x08A2, "HAH WITH DOT BELOW AND 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x08A3, "TAH WITH 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_TAH },
    { 0x08A4, "DOTLESS FEH WITH DOT BELOW AND 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_FEH },
    { 0x08A5, "QAF WITH DOT BELOW", JOINING_TYPE_D | JOINING_GROUP_QAF },
    { 0x08A6, "LAM WITH DOUBLE BAR", JOINING_TYPE_D | JOINING_GROUP_LAM },
    { 0x08A7, "MEEM WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_MEEM },
    { 0x08A8, "YEH WITH HAMZA ABOVE", JOINING_TYPE_D | JOINING_GROUP_YEH },
    { 0x08A9, "YEH WITH DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_YEH },
    { 0x08AA, "REH WITH LOOP", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x08AB, "WAW WITH DOT WITHIN", JOINING_TYPE_R | JOINING_GROUP_WAW },
    { 0x08AC, "ROHINGYA YEH", JOINING_TYPE_R | JOINING_GROUP_ROHINGYA_YEH },
    { 0x08AD, "LOW ALEF", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x08AE, "DAL WITH 3 DOTS BELOW", JOINING_TYPE_R | JOINING_GROUP_DAL },
    { 0x08AF, "SAD WITH 3 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_SAD },
    { 0x08B0, "KEHEH WITH STROKE BELOW", JOINING_TYPE_D | JOINING_GROUP_GAF },
    { 0x08B1, "STRAIGHT WAW", JOINING_TYPE_R | JOINING_GROUP_STRAIGHT_WAW },
    { 0x08B2, "REH WITH DOT AND INVERTED V ABOVE", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x08B3, "AIN WITH 3 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_AIN },
    { 0x08B4, "KAF WITH DOT BELOW", JOINING_TYPE_D | JOINING_GROUP_KAF },
    { 0x08B6, "BEH WITH MEEM ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x08B7, "DOTLESS BEH WITH 3 DOTS BELOW AND MEEM ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x08B8, "DOTLESS BEH WITH TEH ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x08B9, "REH WITH NOON ABOVE", JOINING_TYPE_R | JOINING_GROUP_REH },
    { 0x08BA, "YEH WITH NOON ABOVE", JOINING_TYPE_D | JOINING_GROUP_YEH },
    { 0x08BB, "AFRICAN FEH", JOINING_TYPE_D | JOINING_GROUP_AFRICAN_FEH },
    { 0x08BC, "AFRICAN QAF", JOINING_TYPE_D | JOINING_GROUP_AFRICAN_QAF },
    { 0x08BD, "AFRICAN NOON", JOINING_TYPE_D | JOINING_GROUP_AFRICAN_NOON },
    { 0x08BE, "DOTLESS BEH WITH 3 DOTS BELOW AND V ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x08BF, "DOTLESS BEH WITH 2 DOTS AND V ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x08C0, "DOTLESS BEH WITH TAH AND V ABOVE", JOINING_TYPE_D | JOINING_GROUP_BEH },
    { 0x08C1, "HAH WITH 3 DOTS BELOW AND V ABOVE", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x08C2, "KEHEH WITH V ABOVE", JOINING_TYPE_D | JOINING_GROUP_GAF },
    { 0x08C3, "AIN WITH DIAMOND 4 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_AIN },
    { 0x08C4, "AFRICAN QAF WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_AFRICAN_QAF },
    { 0x08C5, "HAH WITH DOT BELOW AND 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x08C6, "HAH WITH DIAMOND 4 DOTS BELOW", JOINING_TYPE_D | JOINING_GROUP_HAH },
    { 0x08C7, "LAM WITH TAH ABOVE", JOINING_TYPE_D | JOINING_GROUP_LAM },
    { 0x08E2, "ARABIC DISPUTED END OF AYAH", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x1806, "MONGOLIAN TODO SOFT HYPHEN", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x1807, "MONGOLIAN SIBE SYLLABLE BOUNDARY MARKER", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x180A, "MONGOLIAN NIRUGU", JOINING_TYPE_C | NO_JOINING_GROUP },
    { 0x180E, "MONGOLIAN VOWEL SEPARATOR", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x1820, "MONGOLIAN A", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1821, "MONGOLIAN E", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1822, "MONGOLIAN I", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1823, "MONGOLIAN O", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1824, "MONGOLIAN U", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1825, "MONGOLIAN OE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1826, "MONGOLIAN UE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1827, "MONGOLIAN EE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1828, "MONGOLIAN NA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1829, "MONGOLIAN ANG", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x182A, "MONGOLIAN BA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x182B, "MONGOLIAN PA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x182C, "MONGOLIAN QA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x182D, "MONGOLIAN GA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x182E, "MONGOLIAN MA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x182F, "MONGOLIAN LA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1830, "MONGOLIAN SA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1831, "MONGOLIAN SHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1832, "MONGOLIAN TA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1833, "MONGOLIAN DA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1834, "MONGOLIAN CHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1835, "MONGOLIAN JA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1836, "MONGOLIAN YA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1837, "MONGOLIAN RA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1838, "MONGOLIAN WA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1839, "MONGOLIAN FA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x183A, "MONGOLIAN KA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x183B, "MONGOLIAN KHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x183C, "MONGOLIAN TSA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x183D, "MONGOLIAN ZA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x183E, "MONGOLIAN HAA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x183F, "MONGOLIAN ZRA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1840, "MONGOLIAN LHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1841, "MONGOLIAN ZHI", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1842, "MONGOLIAN CHI", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1843, "MONGOLIAN TODO LONG VOWEL SIGN", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1844, "MONGOLIAN TODO E", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1845, "MONGOLIAN TODO I", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1846, "MONGOLIAN TODO O", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1847, "MONGOLIAN TODO U", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1848, "MONGOLIAN TODO OE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1849, "MONGOLIAN TODO UE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x184A, "MONGOLIAN TODO ANG", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x184B, "MONGOLIAN TODO BA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x184C, "MONGOLIAN TODO PA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x184D, "MONGOLIAN TODO QA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x184E, "MONGOLIAN TODO GA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x184F, "MONGOLIAN TODO MA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1850, "MONGOLIAN TODO TA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1851, "MONGOLIAN TODO DA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1852, "MONGOLIAN TODO CHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1853, "MONGOLIAN TODO JA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1854, "MONGOLIAN TODO TSA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1855, "MONGOLIAN TODO YA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1856, "MONGOLIAN TODO WA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1857, "MONGOLIAN TODO KA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1858, "MONGOLIAN TODO GAA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1859, "MONGOLIAN TODO HAA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x185A, "MONGOLIAN TODO JIA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x185B, "MONGOLIAN TODO NIA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x185C, "MONGOLIAN TODO DZA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x185D, "MONGOLIAN SIBE E", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x185E, "MONGOLIAN SIBE I", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x185F, "MONGOLIAN SIBE IY", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1860, "MONGOLIAN SIBE UE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1861, "MONGOLIAN SIBE U", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1862, "MONGOLIAN SIBE ANG", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1863, "MONGOLIAN SIBE KA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1864, "MONGOLIAN SIBE GA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1865, "MONGOLIAN SIBE HA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1866, "MONGOLIAN SIBE PA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1867, "MONGOLIAN SIBE SHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1868, "MONGOLIAN SIBE TA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1869, "MONGOLIAN SIBE DA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x186A, "MONGOLIAN SIBE JA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x186B, "MONGOLIAN SIBE FA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x186C, "MONGOLIAN SIBE GAA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x186D, "MONGOLIAN SIBE HAA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x186E, "MONGOLIAN SIBE TSA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x186F, "MONGOLIAN SIBE ZA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1870, "MONGOLIAN SIBE RAA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1871, "MONGOLIAN SIBE CHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1872, "MONGOLIAN SIBE ZHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1873, "MONGOLIAN MANCHU I", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1874, "MONGOLIAN MANCHU KA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1875, "MONGOLIAN MANCHU RA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1876, "MONGOLIAN MANCHU FA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1877, "MONGOLIAN MANCHU ZHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1878, "MONGOLIAN MANCHU CHA WITH 2 DOTS", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1880, "MONGOLIAN ALI GALI ANUSVARA ONE", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x1881, "MONGOLIAN ALI GALI VISARGA ONE", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x1882, "MONGOLIAN ALI GALI DAMARU", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x1883, "MONGOLIAN ALI GALI UBADAMA", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x1884, "MONGOLIAN ALI GALI INVERTED UBADAMA", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x1885, "MONGOLIAN ALI GALI BALUDA", JOINING_TYPE_T | NO_JOINING_GROUP },
    { 0x1886, "MONGOLIAN ALI GALI THREE BALUDA", JOINING_TYPE_T | NO_JOINING_GROUP },
    { 0x1887, "MONGOLIAN ALI GALI A", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1888, "MONGOLIAN ALI GALI I", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1889, "MONGOLIAN ALI GALI KA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x188A, "MONGOLIAN ALI GALI NGA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x188B, "MONGOLIAN ALI GALI CA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x188C, "MONGOLIAN ALI GALI TTA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x188D, "MONGOLIAN ALI GALI TTHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x188E, "MONGOLIAN ALI GALI DDA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x188F, "MONGOLIAN ALI GALI NNA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1890, "MONGOLIAN ALI GALI TA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1891, "MONGOLIAN ALI GALI DA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1892, "MONGOLIAN ALI GALI PA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1893, "MONGOLIAN ALI GALI PHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1894, "MONGOLIAN ALI GALI SSA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1895, "MONGOLIAN ALI GALI ZHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1896, "MONGOLIAN ALI GALI ZA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1897, "MONGOLIAN ALI GALI AH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1898, "MONGOLIAN TODO ALI GALI TA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1899, "MONGOLIAN TODO ALI GALI ZHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x189A, "MONGOLIAN MANCHU ALI GALI GHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x189B, "MONGOLIAN MANCHU ALI GALI NGA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x189C, "MONGOLIAN MANCHU ALI GALI CA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x189D, "MONGOLIAN MANCHU ALI GALI JHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x189E, "MONGOLIAN MANCHU ALI GALI TTA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x189F, "MONGOLIAN MANCHU ALI GALI DDHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x18A0, "MONGOLIAN MANCHU ALI GALI TA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x18A1, "MONGOLIAN MANCHU ALI GALI DHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x18A2, "MONGOLIAN MANCHU ALI GALI SSA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x18A3, "MONGOLIAN MANCHU ALI GALI CYA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x18A4, "MONGOLIAN MANCHU ALI GALI ZHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x18A5, "MONGOLIAN MANCHU ALI GALI ZA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x18A6, "MONGOLIAN ALI GALI HALF U", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x18A7, "MONGOLIAN ALI GALI HALF YA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x18A8, "MONGOLIAN MANCHU ALI GALI BHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x18AA, "MONGOLIAN MANCHU ALI GALI LHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x200C, "ZERO WIDTH NON-JOINER", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x200D, "ZERO WIDTH JOINER", JOINING_TYPE_C | NO_JOINING_GROUP },
    { 0x202F, "NARROW NO-BREAK SPACE", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x2066, "LEFT-TO-RIGHT ISOLATE", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x2067, "RIGHT-TO-LEFT ISOLATE", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x2068, "FIRST STRONG ISOLATE", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x2069, "POP DIRECTIONAL ISOLATE", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0xA840, "PHAGS-PA KA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA841, "PHAGS-PA KHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA842, "PHAGS-PA GA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA843, "PHAGS-PA NGA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA844, "PHAGS-PA CA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA845, "PHAGS-PA CHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA846, "PHAGS-PA JA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA847, "PHAGS-PA NYA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA848, "PHAGS-PA TA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA849, "PHAGS-PA THA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA84A, "PHAGS-PA DA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA84B, "PHAGS-PA NA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA84C, "PHAGS-PA PA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA84D, "PHAGS-PA PHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA84E, "PHAGS-PA BA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA84F, "PHAGS-PA MA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA850, "PHAGS-PA TSA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA851, "PHAGS-PA TSHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA852, "PHAGS-PA DZA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA853, "PHAGS-PA WA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA854, "PHAGS-PA ZHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA855, "PHAGS-PA ZA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA856, "PHAGS-PA SMALL A", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA857, "PHAGS-PA YA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA858, "PHAGS-PA RA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA859, "PHAGS-PA LA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA85A, "PHAGS-PA SHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA85B, "PHAGS-PA SA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA85C, "PHAGS-PA HA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA85D, "PHAGS-PA A", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA85E, "PHAGS-PA I", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA85F, "PHAGS-PA U", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA860, "PHAGS-PA E", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA861, "PHAGS-PA O", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA862, "PHAGS-PA QA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA863, "PHAGS-PA XA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA864, "PHAGS-PA FA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA865, "PHAGS-PA GGA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA866, "PHAGS-PA EE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA867, "PHAGS-PA SUBJOINED WA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA868, "PHAGS-PA SUBJOINED YA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA869, "PHAGS-PA TTA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA86A, "PHAGS-PA TTHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA86B, "PHAGS-PA DDA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA86C, "PHAGS-PA NNA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA86D, "PHAGS-PA ALTERNATE YA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA86E, "PHAGS-PA VOICELESS SHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA86F, "PHAGS-PA VOICED HA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA870, "PHAGS-PA ASPIRATED FA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA871, "PHAGS-PA SUBJOINED RA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0xA872, "PHAGS-PA SUPERFIXED RA", JOINING_TYPE_L | NO_JOINING_GROUP },
    { 0xA873, "PHAGS-PA CANDRABINDU", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x10AC0, "MANICHAEAN ALEPH", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_ALEPH },
    { 0x10AC1, "MANICHAEAN BETH", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_BETH },
    { 0x10AC2, "MANICHAEAN BETH WITH 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_BETH },
    { 0x10AC3, "MANICHAEAN GIMEL", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_GIMEL },
    { 0x10AC4, "MANICHAEAN GIMEL WITH ATTACHED RING BELOW", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_GIMEL },
    { 0x10AC5, "MANICHAEAN DALETH", JOINING_TYPE_R | JOINING_GROUP_MANICHAEAN_DALETH },
    { 0x10AC6, "MANICHAEAN HE", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x10AC7, "MANICHAEAN WAW", JOINING_TYPE_R | JOINING_GROUP_MANICHAEAN_WAW },
    { 0x10AC8, "MANICHAEAN UD", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x10AC9, "MANICHAEAN ZAYIN", JOINING_TYPE_R | JOINING_GROUP_MANICHAEAN_ZAYIN },
    { 0x10ACA, "MANICHAEAN ZAYIN WITH 2 DOTS ABOVE", JOINING_TYPE_R | JOINING_GROUP_MANICHAEAN_ZAYIN },
    { 0x10ACB, "MANICHAEAN JAYIN", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x10ACC, "MANICHAEAN JAYIN WITH 2 DOTS ABOVE", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x10ACD, "MANICHAEAN HETH", JOINING_TYPE_L | JOINING_GROUP_MANICHAEAN_HETH },
    { 0x10ACE, "MANICHAEAN TETH", JOINING_TYPE_R | JOINING_GROUP_MANICHAEAN_TETH },
    { 0x10ACF, "MANICHAEAN YODH", JOINING_TYPE_R | JOINING_GROUP_MANICHAEAN_YODH },
    { 0x10AD0, "MANICHAEAN KAPH", JOINING_TYPE_R | JOINING_GROUP_MANICHAEAN_KAPH },
    { 0x10AD1, "MANICHAEAN KAPH WITH DOT ABOVE", JOINING_TYPE_R | JOINING_GROUP_MANICHAEAN_KAPH },
    { 0x10AD2, "MANICHAEAN KAPH WITH 2 DOTS ABOVE", JOINING_TYPE_R | JOINING_GROUP_MANICHAEAN_KAPH },
    { 0x10AD3, "MANICHAEAN LAMEDH", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_LAMEDH },
    { 0x10AD4, "MANICHAEAN DHAMEDH", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_DHAMEDH },
    { 0x10AD5, "MANICHAEAN THAMEDH", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_THAMEDH },
    { 0x10AD6, "MANICHAEAN MEM", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_MEM },
    { 0x10AD7, "MANICHAEAN NUN", JOINING_TYPE_L | JOINING_GROUP_MANICHAEAN_NUN },
    { 0x10AD8, "MANICHAEAN SAMEKH", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_SAMEKH },
    { 0x10AD9, "MANICHAEAN AYIN", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_AYIN },
    { 0x10ADA, "MANICHAEAN AYIN WITH 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_AYIN },
    { 0x10ADB, "MANICHAEAN PE", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_PE },
    { 0x10ADC, "MANICHAEAN PE WITH DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_PE },
    { 0x10ADD, "MANICHAEAN SADHE", JOINING_TYPE_R | JOINING_GROUP_MANICHAEAN_SADHE },
    { 0x10ADE, "MANICHAEAN QOPH", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_QOPH },
    { 0x10ADF, "MANICHAEAN QOPH WITH DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_QOPH },
    { 0x10AE0, "MANICHAEAN QOPH WITH 2 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_QOPH },
    { 0x10AE1, "MANICHAEAN RESH", JOINING_TYPE_R | JOINING_GROUP_MANICHAEAN_RESH },
    { 0x10AE2, "MANICHAEAN SHIN", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x10AE3, "MANICHAEAN SHIN WITH 2 DOTS ABOVE", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x10AE4, "MANICHAEAN TAW", JOINING_TYPE_R | JOINING_GROUP_MANICHAEAN_TAW },
    { 0x10AEB, "MANICHAEAN ONE", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_ONE },
    { 0x10AEC, "MANICHAEAN FIVE", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_FIVE },
    { 0x10AED, "MANICHAEAN TEN", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_TEN },
    { 0x10AEE, "MANICHAEAN TWENTY", JOINING_TYPE_D | JOINING_GROUP_MANICHAEAN_TWENTY },
    { 0x10AEF, "MANICHAEAN HUNDRED", JOINING_TYPE_R | JOINING_GROUP_MANICHAEAN_HUNDRED },
    { 0x10B80, "PSALTER PAHLAVI ALEPH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10B81, "PSALTER PAHLAVI BETH", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10B82, "PSALTER PAHLAVI GIMEL", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10B83, "PSALTER PAHLAVI DALETH", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10B84, "PSALTER PAHLAVI HE", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10B85, "PSALTER PAHLAVI WAW-AYIN-RESH", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10B86, "PSALTER PAHLAVI ZAYIN", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10B87, "PSALTER PAHLAVI HETH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10B88, "PSALTER PAHLAVI YODH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10B89, "PSALTER PAHLAVI KAPH", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10B8A, "PSALTER PAHLAVI LAMEDH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10B8B, "PSALTER PAHLAVI MEM-QOPH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10B8C, "PSALTER PAHLAVI NUN", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10B8D, "PSALTER PAHLAVI SAMEKH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10B8E, "PSALTER PAHLAVI PE", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10B8F, "PSALTER PAHLAVI SADHE", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10B90, "PSALTER PAHLAVI SHIN", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10B91, "PSALTER PAHLAVI TAW", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10BA9, "PSALTER PAHLAVI ONE", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10BAA, "PSALTER PAHLAVI TWO", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10BAB, "PSALTER PAHLAVI THREE", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10BAC, "PSALTER PAHLAVI FOUR", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10BAD, "PSALTER PAHLAVI TEN", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10BAE, "PSALTER PAHLAVI TWENTY", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10BAF, "PSALTER PAHLAVI HUNDRED", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x10D00, "HANIFI ROHINGYA A", JOINING_TYPE_L | NO_JOINING_GROUP },
    { 0x10D01, "HANIFI ROHINGYA BA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D02, "HANIFI ROHINGYA PA", JOINING_TYPE_D | JOINING_GROUP_HANIFI_ROHINGYA_PA },
    { 0x10D03, "HANIFI ROHINGYA TA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D04, "HANIFI ROHINGYA TTA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D05, "HANIFI ROHINGYA JA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D06, "HANIFI ROHINGYA CA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D07, "HANIFI ROHINGYA HA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D08, "HANIFI ROHINGYA KHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D09, "HANIFI ROHINGYA PA WITH DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_HANIFI_ROHINGYA_PA },
    { 0x10D0A, "HANIFI ROHINGYA DA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D0B, "HANIFI ROHINGYA DDA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D0C, "HANIFI ROHINGYA RA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D0D, "HANIFI ROHINGYA RRA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D0E, "HANIFI ROHINGYA ZA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D0F, "HANIFI ROHINGYA SA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D10, "HANIFI ROHINGYA SHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D11, "HANIFI ROHINGYA KA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D12, "HANIFI ROHINGYA GA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D13, "HANIFI ROHINGYA LA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D14, "HANIFI ROHINGYA MA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D15, "HANIFI ROHINGYA NA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D16, "HANIFI ROHINGYA WA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D17, "HANIFI ROHINGYA KINNA WA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D18, "HANIFI ROHINGYA YA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D19, "HANIFI ROHINGYA KINNA YA", JOINING_TYPE_D | JOINING_GROUP_HANIFI_ROHINGYA_KINNA_YA },
    { 0x10D1A, "HANIFI ROHINGYA NGA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D1B, "HANIFI ROHINGYA NYA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D1C, "HANIFI ROHINGYA PA WITH 3 DOTS ABOVE", JOINING_TYPE_D | JOINING_GROUP_HANIFI_ROHINGYA_PA },
    { 0x10D1D, "HANIFI ROHINGYA VOWEL A", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D1E, "HANIFI ROHINGYA DOTLESS KINNA YA WITH LEFT-FACING HOOK BELOW", JOINING_TYPE_D | JOINING_GROUP_HANIFI_ROHINGYA_KINNA_YA },
    { 0x10D1F, "HANIFI ROHINGYA VOWEL U", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D20, "HANIFI ROHINGYA DOTLESS KINNA YA WITH RIGHT-FACING HOOK BELOW", JOINING_TYPE_D | JOINING_GROUP_HANIFI_ROHINGYA_KINNA_YA },
    { 0x10D21, "HANIFI ROHINGYA VOWEL O", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10D22, "HANIFI ROHINGYA SAKIN", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10D23, "HANIFI ROHINGYA DOTLESS KINNA YA WITH DOT ABOVE", JOINING_TYPE_D | JOINING_GROUP_HANIFI_ROHINGYA_KINNA_YA },
    { 0x10F30, "SOGDIAN ALEPH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F31, "SOGDIAN BETH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F32, "SOGDIAN GIMEL", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F33, "SOGDIAN HE", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10F34, "SOGDIAN WAW", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F35, "SOGDIAN ZAYIN", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F36, "SOGDIAN HETH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F37, "SOGDIAN YODH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F38, "SOGDIAN KAPH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F39, "SOGDIAN LAMEDH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F3A, "SOGDIAN MEM", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F3B, "SOGDIAN NUN", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F3C, "SOGDIAN SAMEKH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F3D, "SOGDIAN AYIN", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F3E, "SOGDIAN PE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F3F, "SOGDIAN SADHE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F40, "SOGDIAN RESH-AYIN", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F41, "SOGDIAN SHIN", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F42, "SOGDIAN TAW", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F43, "SOGDIAN FETH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F44, "SOGDIAN LESH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F45, "SOGDIAN INDEPENDENT SHIN", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x10F51, "SOGDIAN ONE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F52, "SOGDIAN TEN", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F53, "SOGDIAN TWENTY", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10F54, "SOGDIAN ONE HUNDRED", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10FB0, "CHORASMIAN ALEPH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10FB1, "CHORASMIAN SMALL ALEPH", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x10FB2, "CHORASMIAN BETH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10FB3, "CHORASMIAN GIMEL", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10FB4, "CHORASMIAN DALETH", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10FB5, "CHORASMIAN HE", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10FB6, "CHORASMIAN WAW", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10FB7, "CHORASMIAN CURLED WAW", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x10FB8, "CHORASMIAN ZAYIN", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10FB9, "CHORASMIAN HETH", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10FBA, "CHORASMIAN YODH", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10FBB, "CHORASMIAN KAPH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10FBC, "CHORASMIAN LAMEDH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10FBD, "CHORASMIAN MEM", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10FBE, "CHORASMIAN NUN", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10FBF, "CHORASMIAN SAMEKH", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10FC0, "CHORASMIAN AYIN", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x10FC1, "CHORASMIAN PE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10FC2, "CHORASMIAN RESH", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10FC3, "CHORASMIAN SHIN", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10FC4, "CHORASMIAN TAW", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10FC5, "CHORASMIAN ONE", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x10FC6, "CHORASMIAN TWO", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x10FC7, "CHORASMIAN THREE", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x10FC8, "CHORASMIAN FOUR", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x10FC9, "CHORASMIAN TEN", JOINING_TYPE_R | NO_JOINING_GROUP },
    { 0x10FCA, "CHORASMIAN TWENTY", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x10FCB, "CHORASMIAN ONE HUNDRED", JOINING_TYPE_L | NO_JOINING_GROUP },
    { 0x110BD, "KAITHI NUMBER SIGN", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x110CD, "KAITHI NUMBER SIGN ABOVE", JOINING_TYPE_U | NO_JOINING_GROUP },
    { 0x1E900, "ADLAM CAPITAL ALIF", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E901, "ADLAM CAPITAL DAALI", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E902, "ADLAM CAPITAL LAAM", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E903, "ADLAM CAPITAL MIIM", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E904, "ADLAM CAPITAL BA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E905, "ADLAM CAPITAL SINNYIIYHE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E906, "ADLAM CAPITAL PE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E907, "ADLAM CAPITAL BHE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E908, "ADLAM CAPITAL RA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E909, "ADLAM CAPITAL E", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E90A, "ADLAM CAPITAL FA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E90B, "ADLAM CAPITAL I", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E90C, "ADLAM CAPITAL O", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E90D, "ADLAM CAPITAL DHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E90E, "ADLAM CAPITAL YHE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E90F, "ADLAM CAPITAL WAW", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E910, "ADLAM CAPITAL NUN", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E911, "ADLAM CAPITAL KAF", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E912, "ADLAM CAPITAL YA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E913, "ADLAM CAPITAL U", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E914, "ADLAM CAPITAL JIIM", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E915, "ADLAM CAPITAL CHI", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E916, "ADLAM CAPITAL HA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E917, "ADLAM CAPITAL QAAF", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E918, "ADLAM CAPITAL GA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E919, "ADLAM CAPITAL NYA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E91A, "ADLAM CAPITAL TU", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E91B, "ADLAM CAPITAL NHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E91C, "ADLAM CAPITAL VA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E91D, "ADLAM CAPITAL KHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E91E, "ADLAM CAPITAL GBE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E91F, "ADLAM CAPITAL ZAL", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E920, "ADLAM CAPITAL KPO", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E921, "ADLAM CAPITAL SHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E922, "ADLAM SMALL ALIF", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E923, "ADLAM SMALL DAALI", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E924, "ADLAM SMALL LAAM", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E925, "ADLAM SMALL MIIM", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E926, "ADLAM SMALL BA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E927, "ADLAM SMALL SINNYIIYHE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E928, "ADLAM SMALL PE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E929, "ADLAM SMALL BHE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E92A, "ADLAM SMALL RA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E92B, "ADLAM SMALL E", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E92C, "ADLAM SMALL FA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E92D, "ADLAM SMALL I", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E92E, "ADLAM SMALL O", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E92F, "ADLAM SMALL DHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E930, "ADLAM SMALL YHE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E931, "ADLAM SMALL WAW", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E932, "ADLAM SMALL NUN", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E933, "ADLAM SMALL KAF", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E934, "ADLAM SMALL YA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E935, "ADLAM SMALL U", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E936, "ADLAM SMALL JIIM", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E937, "ADLAM SMALL CHI", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E938, "ADLAM SMALL HA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E939, "ADLAM SMALL QAAF", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E93A, "ADLAM SMALL GA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E93B, "ADLAM SMALL NYA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E93C, "ADLAM SMALL TU", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E93D, "ADLAM SMALL NHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E93E, "ADLAM SMALL VA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E93F, "ADLAM SMALL KHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E940, "ADLAM SMALL GBE", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E941, "ADLAM SMALL ZAL", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E942, "ADLAM SMALL KPO", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E943, "ADLAM SMALL SHA", JOINING_TYPE_D | NO_JOINING_GROUP },
    { 0x1E94B, "ADLAM NASALIZATION MARK", JOINING_TYPE_T | NO_JOINING_GROUP },
};

#endif /* HZ_DATA_TABLES_H */