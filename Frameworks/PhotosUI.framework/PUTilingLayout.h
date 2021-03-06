/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTilingLayout : NSObject {
    <PUTilingCoordinateSystem> * _coordinateSystem;
    struct CGPoint { 
        float x; 
        float y; 
    }  _coordinateSystemOrigin;
    PUTilingDataSource * _dataSource;
    <PUTilingCoordinateSystem> * _parentCoordinateSystem;
    PUTilingView * _tilingView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _visibleRect;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentBounds;
@property (nonatomic, readonly) <PUTilingCoordinateSystem> *coordinateSystem;
@property (nonatomic) struct CGPoint { float x1; float x2; } coordinateSystemOrigin;
@property (nonatomic, retain) PUTilingDataSource *dataSource;
@property (nonatomic) <PUTilingCoordinateSystem> *parentCoordinateSystem;
@property (nonatomic, readonly) PUTilingScrollInfo *preferredScrollInfo;
@property (nonatomic) PUTilingView *tilingView;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleRect;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;
- (id)coordinateSystem;
- (struct CGPoint { float x1; float x2; })coordinateSystemOrigin;
- (id)dataSource;
- (id)description;
- (id)init;
- (void)invalidateLayoutForUpdateWithItems:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)layoutInfosForTilesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)parentCoordinateSystem;
- (id)preferredScrollInfo;
- (void)prepareLayout;
- (void)setCoordinateSystemOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setParentCoordinateSystem:(id)arg1;
- (void)setTilingView:(id)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)tilingView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(int)arg2;

@end
