/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSFamilyCircleRequest : SSRequest <SSXPCCoding> {
    int  _authenticationPromptStyle;
    BOOL  _fetchITunesAccountNames;
}

@property (nonatomic) int authenticationPromptStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fetchITunesAccountNames;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (int)authenticationPromptStyle;
- (id)copyXPCEncoding;
- (BOOL)fetchITunesAccountNames;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setAuthenticationPromptStyle:(int)arg1;
- (void)setFetchITunesAccountNames:(BOOL)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithResponseBlock:(id /* block */)arg1;

@end
