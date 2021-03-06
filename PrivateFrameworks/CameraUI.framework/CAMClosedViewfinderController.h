/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMClosedViewfinderController : NSObject {
    NSMutableSet * __reasonsForClosingViewfinder;
    <CAMClosedViewfinderControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) NSMutableSet *_reasonsForClosingViewfinder;
@property (nonatomic) <CAMClosedViewfinderControllerDelegate> *delegate;
@property (getter=isViewfinderClosed, nonatomic, readonly) BOOL viewfinderClosed;

- (void).cxx_destruct;
- (id)_reasonsForClosingViewfinder;
- (void)addClosedViewfinderReason:(int)arg1;
- (id)delegate;
- (id)init;
- (BOOL)isViewfinderClosed;
- (void)removeClosedViewfinderReason:(int)arg1;
- (void)setDelegate:(id)arg1;

@end
