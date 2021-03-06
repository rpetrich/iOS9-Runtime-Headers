/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAccessibilityElement : NSObject <UIAccessibilityIdentification> {
    id  _accessibilityContainer;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _accessibilityFrame;
    NSString * _accessibilityHint;
    NSString * _accessibilityLabel;
    unsigned long long  _accessibilityTraits;
    NSString * _accessibilityValue;
    BOOL  _isAccessibilityElement;
    NSString * accessibilityIdentifier;
}

@property (nonatomic) id accessibilityContainer;
@property (nonatomic, retain) NSArray *accessibilityContainerElements;
@property (nonatomic) id accessibilityDelegate;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } accessibilityFrame;
@property (nonatomic, retain) NSString *accessibilityHint;
@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, retain) NSString *accessibilityLabel;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, retain) NSString *accessibilityValue;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isAccessibilityElement;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (id)accessibilityContainer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)initWithAccessibilityContainer:(id)arg1;
- (BOOL)isAccessibilityElement;
- (void)setAccessibilityContainer:(id)arg1;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setIsAccessibilityElement:(BOOL)arg1;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id)accessibilityContainerElements;
- (id)accessibilityDelegate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)dataForKey:(id)arg1;
- (void)delegateSpecificsForAttribute:(int)arg1 delegate:(id*)arg2 selector:(SEL*)arg3;
- (void)setAccessibilityContainerElements:(id)arg1;
- (void)setAccessibilityDelegate:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setDelegate:(id)arg1 forAttribute:(int)arg2 withSelector:(SEL)arg3;
- (void)setTableCellYOffset:(float)arg1;

@end
