/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/EKPersistentParticipant.h>

@interface EKPersistentOrganizer : EKPersistentParticipant
{
}

+ (id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(_Bool)arg4;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
- (id)owner;
- (void)setOwner:(id)arg1;
@property(nonatomic, getter=isCurrentUser) _Bool currentUser;
- (int)entityType;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(_Bool)arg4;

@end

