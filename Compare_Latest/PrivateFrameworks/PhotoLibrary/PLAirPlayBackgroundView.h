/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibrary/PLPlayingExternallyBackgroundView.h>

@class NSString;

@interface PLAirPlayBackgroundView : PLPlayingExternallyBackgroundView
{
    NSString *_deviceName;
}

@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void)setIsMovie:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 deviceName:(id)arg2;

@end

