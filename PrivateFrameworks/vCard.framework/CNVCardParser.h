/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardParser : NSObject {
    BOOL  _30vCard;
    NSMutableDictionary * _activityAlerts;
    NSMutableArray * _addresses;
    NSDateComponents * _altBday;
    BOOL  _base64;
    NSDateComponents * _bday;
    NSMutableArray * _calendarURIs;
    NSString * _carddavUID;
    NSMutableArray * _cropRects;
    NSData * _data;
    NSMutableArray * _dateComponents;
    CNVCardDateComponentsParser * _dateComponentsParser;
    unsigned int  _defaultEncoding;
    NSMutableArray * _emails;
    unsigned int  _encoding;
    NSMutableDictionary * _extensions;
    NSString * _first;
    NSString * _formattedName;
    BOOL  _fullNameHasZeroLength;
    NSString * _grouping;
    BOOL  _hasImportErrors;
    NSData * _imageData;
    NSString * _imageGroup;
    NSString * _imageReference;
    NSMutableArray * _instantMessagingAddresses;
    NSArray * _itemParameters;
    NSString * _last;
    CNVCardLexer * _lexer;
    NSMutableString * _notes;
    NSString * _org;
    CNVCardSelectorMap * _parameterSelectorMap;
    CNVCardSelectorMap * _parsingSelectorMap;
    NSMutableArray * _phones;
    BOOL  _quotedPrintable;
    NSMutableArray * _relatedNames;
    <CNVCardParsedResultBuilder> * _resultBuilder;
    NSMutableArray * _socialProfiles;
    NSString * _uid;
    NSMutableArray * _unknowns;
    NSMutableArray * _urls;
}

+ (unsigned int)inferredStringEncodingFromData:(id)arg1;
+ (id)newParameterSelectorMap;
+ (id)newParsingSelectorMap;
+ (id)parseData:(id)arg1 resultFactory:(id)arg2;
+ (BOOL)parseFirstResultInData:(id)arg1 resultBuilder:(id)arg2;

- (BOOL)advancePastSemicolon;
- (BOOL)atEOF;
- (void)cleanUpCardState;
- (int)currentPosition;
- (void)dealloc;
- (id)fallbackLabelForProperty:(id)arg1;
- (id)firstCustomLabelForProperty:(id)arg1 types:(id)arg2;
- (id)firstParameterWithName:(id)arg1;
- (id)firstValueForKey:(id)arg1 inExtension:(id)arg2;
- (id)firstValueForKey:(id)arg1 inExtensionGroup:(id)arg2;
- (id)genericLabelForProperty:(id)arg1;
- (SEL)handlerSelectorForParameterName:(id)arg1;
- (BOOL)hasImportErrors;
- (id)initWithData:(id)arg1;
- (id)makeLineWithLabel:(id)arg1 value:(id)arg2;
- (id)makeLineWithValue:(id)arg1 forProperty:(id)arg2;
- (id)nextBase64Data;
- (id)nextParameterInCurrentLine;
- (id)nextResultWithFactory:(id)arg1 progressLength:(int*)arg2;
- (id)parameterValuesForName:(id)arg1;
- (void)parameter_BASE64:(id)arg1;
- (void)parameter_CHARSET:(id)arg1;
- (void)parameter_ENCODING:(id)arg1;
- (void)parameter_QUOTED_PRINTABLE:(id)arg1;
- (id)parseArrayValue;
- (id)parseBase64Data;
- (BOOL)parseExtension:(id)arg1;
- (BOOL)parseInstantMessageValueWithService:(id)arg1;
- (BOOL)parseLine;
- (BOOL)parseNextResultUsingResultBuilder:(id)arg1;
- (id)parseParameterValues;
- (id)parseParameters;
- (id)parseRemainingLine;
- (id)parseStringValue;
- (id)parseUnknownValueStartingAtPosition:(unsigned int)arg1;
- (BOOL)parseValueUsingSelector:(SEL)arg1;
- (BOOL)parse_ADD;
- (BOOL)parse_ADR;
- (BOOL)parse_BDAY;
- (BOOL)parse_CALURI;
- (BOOL)parse_EMAIL;
- (BOOL)parse_FN;
- (BOOL)parse_IMPP;
- (BOOL)parse_N;
- (BOOL)parse_NICKNAME;
- (BOOL)parse_NOTE;
- (BOOL)parse_ORG;
- (BOOL)parse_PHOTO;
- (BOOL)parse_PRODID;
- (BOOL)parse_REV;
- (BOOL)parse_TEL;
- (BOOL)parse_TITLE;
- (BOOL)parse_UID;
- (BOOL)parse_URL;
- (BOOL)parse_VERSION;
- (BOOL)parse_X_ABADR;
- (BOOL)parse_X_ABDATE;
- (BOOL)parse_X_ABLABEL;
- (BOOL)parse_X_ABORDER;
- (BOOL)parse_X_ABPHOTO;
- (BOOL)parse_X_ABRELATEDNAMES;
- (BOOL)parse_X_ABSHOWAS;
- (BOOL)parse_X_ABUID;
- (BOOL)parse_X_ACTIVITY_ALERT;
- (BOOL)parse_X_ADDRESSBOOKSERVER_PHONEME_DATA;
- (BOOL)parse_X_AIM;
- (BOOL)parse_X_AIM_ID;
- (BOOL)parse_X_ALTBDAY;
- (BOOL)parse_X_GOOGLE_ID;
- (BOOL)parse_X_GOOGLE_TALK;
- (BOOL)parse_X_GTALK;
- (BOOL)parse_X_ICQ;
- (BOOL)parse_X_ICQ_ID;
- (BOOL)parse_X_JABBER;
- (BOOL)parse_X_JABBER_ID;
- (BOOL)parse_X_MAIDENNAME;
- (BOOL)parse_X_MSN;
- (BOOL)parse_X_MSN_ID;
- (BOOL)parse_X_PHONETIC_FIRST_NAME;
- (BOOL)parse_X_PHONETIC_LAST_NAME;
- (BOOL)parse_X_PHONETIC_MIDDLE_NAME;
- (BOOL)parse_X_PRONUNCIATION_FIRST_NAME;
- (BOOL)parse_X_PRONUNCIATION_LAST_NAME;
- (BOOL)parse_X_QQ;
- (BOOL)parse_X_QQ_ID;
- (BOOL)parse_X_SKYPE;
- (BOOL)parse_X_SKYPE_ID;
- (BOOL)parse_X_SKYPE_USERNAME;
- (BOOL)parse_X_SOCIALPROFILE;
- (BOOL)parse_X_YAHOO;
- (BOOL)parse_X_YAHOO_ID;
- (SEL)parsingSelectorForTag:(id)arg1;
- (id)phoneLabel;
- (id)pool_nextResultWithFactory:(id)arg1 progressLength:(int*)arg2;
- (void)processExtensionValues;
- (void)processNameValues;
- (void)reportMultiValueLines:(id)arg1 forProperty:(id)arg2;
- (void)reportValue:(id)arg1 forProperty:(id)arg2;
- (void)reportValues;
- (id)resultsWithFactory:(id)arg1;
- (id)typeParameters;
- (id)validCountryCodes;
- (BOOL)valueIsEmpty:(id)arg1;

@end
