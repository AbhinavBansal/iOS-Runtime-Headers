/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface SSOperationProgress : NSObject <SSXPCCoding, NSCopying> {
    BOOL _canPause;
    double _changeRate;
    long long _currentValue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _estimatedTimeRemaining;
    long long _maxValue;
    long long _normalizedCurrentValue;
    long long _normalizedMaxValue;
    int _operationType;
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
    int _units;
}

@property BOOL canPause;
@property double changeRate;
@property long long currentValue;
@property double estimatedTimeRemaining;
@property long long maxValue;
@property long long normalizedCurrentValue;
@property long long normalizedMaxValue;
@property int operationType;
@property int units;

- (void)_updateStatisticsFromSnapshots;
- (BOOL)canPause;
- (double)changeRate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (long long)currentValue;
- (void)dealloc;
- (id)description;
- (double)estimatedTimeRemaining;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)maxValue;
- (long long)normalizedCurrentValue;
- (long long)normalizedMaxValue;
- (int)operationType;
- (void)resetSnapshots;
- (void)setCanPause:(BOOL)arg1;
- (void)setChangeRate:(double)arg1;
- (void)setCurrentValue:(long long)arg1;
- (void)setEstimatedTimeRemaining:(double)arg1;
- (void)setMaxValue:(long long)arg1;
- (void)setNormalizedCurrentValue:(long long)arg1;
- (void)setNormalizedMaxValue:(long long)arg1;
- (void)setOperationType:(int)arg1;
- (void)setUnits:(int)arg1;
- (void)snapshot;
- (int)units;

@end
