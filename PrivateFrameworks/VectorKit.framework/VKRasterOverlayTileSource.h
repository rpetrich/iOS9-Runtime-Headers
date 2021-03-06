/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterOverlayTileSource : VKTileSource {
    NSObject<OS_dispatch_queue> * _homeQ;
    NSMutableArray * _overlays;
    BOOL  _overrideMaxZoomLevel;
    NSObject<OS_dispatch_group> * _renderGroup;
}

@property (nonatomic, readonly) NSArray *overlays;
@property (nonatomic) BOOL overrideMaxZoomLevel;

- (void)_flush;
- (void)_queueDraw:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)addOverlay:(id)arg1;
- (BOOL)canFetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (BOOL)cancelFetchForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)dealloc;
- (void)exchangeOverlayAtIndex:(unsigned int)arg1 withOverlayAtIndex:(unsigned int)arg2;
- (void)fetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (id)init;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)invalidate;
- (void)invalidateRect:(const struct { double x1; double x2; double x3; double x4; }*)arg1 level:(int)arg2;
- (unsigned int)maximumDownloadZoomLevel;
- (BOOL)maximumZoomLevelBoundsCamera;
- (unsigned int)minimumDownloadZoomLevel;
- (BOOL)minimumZoomLevelBoundsCamera;
- (id)overlays;
- (BOOL)overrideMaxZoomLevel;
- (void)removeOverlay:(id)arg1;
- (void)setOverrideMaxZoomLevel:(BOOL)arg1;
- (int)tileSize;

@end
