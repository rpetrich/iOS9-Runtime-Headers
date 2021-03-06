/* Generated by RuntimeBrowser.
 */

@protocol EKEventGestureControllerDelegate <NSObject>

@required

- (EKEvent *)createEventForEventGestureController:(EKEventGestureController *)arg1;
- (EKDayOccurrenceView *)createOccurrenceViewForEventGestureController:(EKEventGestureController *)arg1;
- (BOOL)didScrollWhenEventGestureController:(EKEventGestureController *)arg1 scrollTimerFiredToMoveLeft:(BOOL)arg2 right:(BOOL)arg3 vertically:(BOOL)arg4 towardPoint:(struct CGPoint { float x1; float x2; })arg5;
- (void)eventGestureController:(EKEventGestureController *)arg1 addViewToScroller:(UIView *)arg2 isAllDay:(BOOL)arg3;
- (void)eventGestureController:(EKEventGestureController *)arg1 adjustDraggingViewForAllDay:(BOOL)arg2;
- (double)eventGestureController:(EKEventGestureController *)arg1 dateAtPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)eventGestureController:(EKEventGestureController *)arg1 didCancelEditingOccurrence:(EKEvent *)arg2 fadedOut:(BOOL)arg3;
- (BOOL)eventGestureController:(EKEventGestureController *)arg1 didCommitOccurrence:(EKEvent *)arg2 toDate:(double)arg3 isAllDay:(BOOL)arg4 span:(int)arg5;
- (void)eventGestureController:(EKEventGestureController *)arg1 didMoveToDate:(double)arg2 isAllDay:(BOOL)arg3;
- (void)eventGestureController:(EKEventGestureController *)arg1 didSetUpAtDate:(double)arg2 isAllDay:(BOOL)arg3;
- (void)eventGestureController:(EKEventGestureController *)arg1 didSingleTapOccurrence:(EKEvent *)arg2;
- (float)eventGestureController:(EKEventGestureController *)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(BOOL)arg3;
- (BOOL)eventGestureController:(EKEventGestureController *)arg1 isAllDayAtPoint:(struct CGPoint { float x1; float x2; })arg2 requireInsistence:(BOOL)arg3;
- (EKDayOccurrenceView *)eventGestureController:(EKEventGestureController *)arg1 occurrenceViewAtPoint:(struct CGPoint { float x1; float x2; })arg2;
- (EKDayOccurrenceView *)eventGestureController:(EKEventGestureController *)arg1 occurrenceViewForOccurrence:(EKEvent *)arg2;
- (struct CGPoint { float x1; float x2; })eventGestureController:(EKEventGestureController *)arg1 pointAtDate:(double)arg2 isAllDay:(BOOL)arg3;
- (float)eventGestureController:(EKEventGestureController *)arg1 widthForOccurrenceViewOfDays:(unsigned int)arg2;
- (float)eventGestureController:(EKEventGestureController *)arg1 yPositionPerhapsMatchingAllDayOccurrence:(EKEvent *)arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3;
- (UIView *)occurrenceViewSuperviewForEventGestureController:(EKEventGestureController *)arg1;
- (float)timedRegionOriginForEventGestureController:(EKEventGestureController *)arg1;
- (UIView *)touchTrackingViewForEventGestureController:(EKEventGestureController *)arg1;

@optional

- (float)computeXDragOffsetForEventGestureController:(EKEventGestureController *)arg1 currentX:(float)arg2 startX:(float)arg3;
- (BOOL)eventEditorPopoverActiveWhileDraggingForEventGestureController:(EKEventGestureController *)arg1;
- (float)eventGestureController:(EKEventGestureController *)arg1 convertXForMargin:(float)arg2;
- (BOOL)eventGestureController:(EKEventGestureController *)arg1 shouldFadeOccurrenceAfterFling:(EKEvent *)arg2;
- (BOOL)eventGestureControllerShouldAllowLongPress:(EKEventGestureController *)arg1;
- (float)horizontalOffsetForPagingForEventGestureController:(EKEventGestureController *)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })marginFrameForEventGestureController:(EKEventGestureController *)arg1;
- (BOOL)moreThanOneDayVisibleForEventGestureController:(EKEventGestureController *)arg1;
- (float)pageChangeMarginForEventGestureController:(EKEventGestureController *)arg1;

@end
