/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask {
    BOOL _getScheduleChanges;
    BOOL _getScheduleTags;
}

@property BOOL getScheduleChanges;
@property BOOL getScheduleTags;

- (id)copyAdditionalPropElements;
- (BOOL)getScheduleChanges;
- (BOOL)getScheduleTags;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(BOOL)arg3 getScheduleChanges:(BOOL)arg4 appSpecificCalendarItemClass:(Class)arg5;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(BOOL)arg3 getScheduleChanges:(BOOL)arg4;
- (void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2;
- (void)setGetScheduleChanges:(BOOL)arg1;
- (void)setGetScheduleTags:(BOOL)arg1;

@end
