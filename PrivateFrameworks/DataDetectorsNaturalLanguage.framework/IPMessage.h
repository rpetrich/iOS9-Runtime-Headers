/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPMessage : NSObject {
    NSDate * _dateSent;
    NSString * _htmlContent;
    NSString * _identifier;
    NSArray * _messageUnits;
    NSArray * _recipients;
    IPPerson * _sender;
    NSString * _subject;
}

@property (retain) NSDate *dateSent;
@property (retain) NSString *htmlContent;
@property (retain) NSString *identifier;
@property (nonatomic, retain) NSArray *messageUnits;
@property (retain) NSArray *recipients;
@property (retain) IPPerson *sender;
@property (retain) NSString *subject;

- (void).cxx_destruct;
- (id)dateSent;
- (id)firstHeaderValueForKey:(id)arg1 inHeaders:(id)arg2;
- (id)htmlContent;
- (id)identifier;
- (id)init;
- (id)initWithHTMLContent:(id)arg1 emailHeadersDictionary:(id)arg2 dateSent:(id)arg3;
- (id)initWithIdentifier:(id)arg1 subject:(id)arg2 sender:(id)arg3 recipients:(id)arg4 dateSent:(id)arg5;
- (id)messageUnits;
- (id)recipients;
- (id)sender;
- (void)setDateSent:(id)arg1;
- (void)setHtmlContent:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessageUnits:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)subject;

@end
