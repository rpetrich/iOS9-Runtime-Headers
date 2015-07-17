/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPTextWrapCookie : NSObject {
    TSWPColumn * _column;
    NSMutableArray * _floatingWrappables;
    TSDWrapSegments * _interiorWrapSegments;
    TSDLayout<TSWPLayoutTarget> * _target;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _targetInverseTransformInRoot;
    TSUPointerKeyDictionary * _wrapSegmentsInverseTransformInRootDictionary;
}

@property (nonatomic, retain) TSWPColumn *column;
@property (nonatomic, readonly, retain) NSArray *floatingWrappables;
@property (nonatomic, retain) TSDWrapSegments *interiorWrapSegments;
@property (nonatomic) TSDLayout<TSWPLayoutTarget> *target;
@property (nonatomic, readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } targetInverseTransformInRoot;

+ (id)textWrapCookieForColumn:(id)arg1 targetLayout:(id)arg2;

- (void)addFloatingWrappable:(id)arg1;
- (id)column;
- (void)dealloc;
- (id)floatingWrappables;
- (id)initWithColumn:(id)arg1 targetLayout:(id)arg2;
- (id)interiorWrapSegments;
- (void)setColumn:(id)arg1;
- (void)setInteriorWrapSegments:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })targetInverseTransformInRoot;
- (id)transformedWrapSegmentsForWrappable:(id)arg1 canvasSpaceToWrapSpaceTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;

@end