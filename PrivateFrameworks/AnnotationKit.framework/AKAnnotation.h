/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAnnotation : NSObject <NSSecureCoding> {
    BOOL  _isEditingText;
    BOOL  _isTranslating;
    int  _originalExifOrientation;
    float  _originalModelBaseScaleFactor;
    BOOL  _shouldUsePlaceholderText;
    BOOL  _textIsClipped;
    BOOL  _textIsFixedHeight;
    BOOL  _textIsFixedWidth;
}

@property (readonly) NSString *displayName;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } drawingBounds;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } hitTestBounds;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } integralDrawingBounds;
@property BOOL isEditingText;
@property BOOL isTranslating;
@property (nonatomic) int originalExifOrientation;
@property (nonatomic) float originalModelBaseScaleFactor;
@property BOOL shouldUsePlaceholderText;
@property BOOL textIsClipped;
@property BOOL textIsFixedHeight;
@property BOOL textIsFixedWidth;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (id)placeholderText;
+ (BOOL)supportsSecureCoding;

- (void)adjustModelToCompensateForOriginalExif;
- (id)displayName;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })drawingBounds;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitTestBounds;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })integralDrawingBounds;
- (BOOL)isEditingText;
- (BOOL)isTranslating;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (int)originalExifOrientation;
- (float)originalModelBaseScaleFactor;
- (void)setIsEditingText:(BOOL)arg1;
- (void)setIsTranslating:(BOOL)arg1;
- (void)setOriginalExifOrientation:(int)arg1;
- (void)setOriginalModelBaseScaleFactor:(float)arg1;
- (void)setShouldUsePlaceholderText:(BOOL)arg1;
- (void)setTextIsClipped:(BOOL)arg1;
- (void)setTextIsFixedHeight:(BOOL)arg1;
- (void)setTextIsFixedWidth:(BOOL)arg1;
- (BOOL)shouldUsePlaceholderText;
- (BOOL)textIsClipped;
- (BOOL)textIsFixedHeight;
- (BOOL)textIsFixedWidth;
- (void)translateBy:(struct CGPoint { float x1; float x2; })arg1;

@end
