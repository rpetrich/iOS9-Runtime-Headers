/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartGridAdapter : NSObject <NSFastEnumeration> {
    TSCHChartGrid * mGrid;
    unsigned int  mIndex;
}

@property (nonatomic, readonly) TSCHChartGrid *grid;
@property (nonatomic, retain) NSString *name;

- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)grid;
- (id)initWithChartGrid:(id)arg1 index:(unsigned int)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1 atIndex:(unsigned int)arg2;
- (id)valueAtIndex:(unsigned int)arg1;
- (id*)valuesAtIndexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end