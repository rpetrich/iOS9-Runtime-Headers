/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficIncidentImageManager : NSObject <GEOResourceManifestTileGroupObserver> {
    NSCache * _imageCache;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    VKResourceManager * _resourceManager;
    NSMapTable * _targetDisplayToProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void)dealloc;
- (id)imageForIncidentType:(int)arg1 contentScale:(float)arg2;
- (id)imageForIncidentType:(int)arg1 contentScale:(float)arg2 targetDisplay:(int)arg3;
- (id)initWithConfiguration:(id)arg1 resourceManager:(id)arg2;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)setIncidentIconProvider:(id /* block */)arg1 forTargetDisplay:(int)arg2;

@end
