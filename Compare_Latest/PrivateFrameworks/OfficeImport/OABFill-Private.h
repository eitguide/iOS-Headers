/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OABFill.h>

@interface OABFill (Private)
+ (void)readImageFill:(id)arg1 fromFillPropertiesManager:(id)arg2 colorPalette:(id)arg3;
+ (void)readGradientFill:(id)arg1 fromFillPropertiesManager:(id)arg2 colorPalette:(id)arg3;
+ (void)addStopsFromArray:(const struct OABGradientStop *)arg1 stopCount:(int)arg2 inverted:(_Bool)arg3 startPos:(float)arg4 endPos:(float)arg5 toGradientFill:(id)arg6 fillPropertiesManager:(id)arg7;
@end

