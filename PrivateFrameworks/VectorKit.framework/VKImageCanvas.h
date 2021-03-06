/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKImageCanvas : GGLImageCanvas <VKAnimationRunner, VKWorldDelegate> {
    VKCamera * _camera;
    <VKInteractiveCameraController> * _cameraController;
    <VKImageCanvasDelegate> * _delegate;
    VKDispatch * _dispatch;
    double  _frameTimestamp;
    VKLayoutContext * _layoutContext;
    VKTimer * _layoutTimer;
    struct unique_ptr<md::MapCamera, std::__1::default_delete<md::MapCamera> > { 
        struct __compressed_pair<md::MapCamera *, std::__1::default_delete<md::MapCamera> > { 
            struct MapCamera {} *__first_; 
        } __ptr_; 
    }  _mapCamera;
    struct unique_ptr<md::RenderTree, std::__1::default_delete<md::RenderTree> > { 
        struct __compressed_pair<md::RenderTree *, std::__1::default_delete<md::RenderTree> > { 
            struct RenderTree {} *__first_; 
        } __ptr_; 
    }  _mapScene;
    int  _mapType;
    BOOL  _needsLayout;
    struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> > { 
        struct __compressed_pair<md::RenderQueue *, std::__1::default_delete<md::RenderQueue> > { 
            struct RenderQueue {} *__first_; 
        } __ptr_; 
    }  _renderQueue;
    struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { 
        struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { 
            struct RenderQueue {} *__first_; 
        } __ptr_; 
    }  _renderQueueResolve;
    BOOL  _shouldDrawWhileLoading;
    VKWorld * _world;
    struct unique_ptr<(anonymous namespace)::YFlipPass, std::__1::default_delete<(anonymous namespace)::YFlipPass> >="__ptr_"{__compressed_pair<(anonymous namespace)::YFlipPass *, std::__1::default_delete<(anonymous namespace)::YFlipPass> >="__first_"^{YFlipPass {}  _yFlipPass;
}

@property (nonatomic, readonly) VKCamera *camera;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKImageCanvasDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) VKDispatch *dispatch;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic) int mapType;
@property (nonatomic, readonly) double pitch;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VKWorld *world;
@property (nonatomic, readonly) double yaw;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_spinScene:(id)arg1;
- (void)_spinSceneWillRender:(BOOL)arg1;
- (void)animationDidResume:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (id)camera;
- (void)cancelLoad;
- (void)cancelTileRequests;
- (void)clearScene;
- (void)dealloc;
- (id)delegate;
- (void)didLayout;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (id)dispatch;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 useMultisampling:(BOOL)arg3 device:(const struct shared_ptr<ggl::Device> { }*)arg4 homeQueue:(id)arg5;
- (void)loadScene;
- (id)mapRegion;
- (int)mapType;
- (double)pitch;
- (void)renderSceneWithRenderer:(struct Renderer { int (**x1)(); struct Device {} *x2; unsigned int x3; unsigned int x4; bool x5; float x6; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_7_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_7_1_3; } x7; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_8_1_1; } x8; struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > { struct __compressed_pair<ggl::CommandBuffer *, std::__1::default_delete<ggl::CommandBuffer> > { struct CommandBuffer {} *x_1_2_1; } x_9_1_1; } x9; }*)arg1 completion:(id /* block */)arg2;
- (void)runAnimation:(id)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)setDelegate:(id)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)setMapType:(int)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)update;
- (id)world;
- (void)worldDisplayDidChange:(id)arg1;
- (void)worldLayoutDidChange:(id)arg1;
- (double)yaw;

@end
