/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKCalendarItemEditItem.h>

// Not exported
@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem
{
    unsigned long long _entityType;
}

- (_Bool)editItemViewControllerCommit:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2;
- (_Bool)_shouldShowSourceForCalendar:(id)arg1;
- (_Bool)requiresReconfigurationOnCommit;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)init;
- (id)initWithEntityType:(unsigned long long)arg1;

@end

