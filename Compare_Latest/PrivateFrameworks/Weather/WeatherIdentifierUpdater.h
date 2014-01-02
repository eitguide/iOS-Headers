/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Weather/WeatherUpdater.h>

@class NSArray, NSMutableArray;

@interface WeatherIdentifierUpdater : WeatherUpdater
{
    id _woeidWeatherHandler;
    NSArray *_requestedCities;
    NSMutableArray *_parsedCities;
}

+ (void)clearSharedIdentifierUpdater;
+ (id)sharedWeatherIdentifierUpdater;
@property(retain, nonatomic) NSMutableArray *parsedCities; // @synthesize parsedCities=_parsedCities;
@property(retain, nonatomic) NSArray *requestedCities; // @synthesize requestedCities=_requestedCities;
- (void)_failed:(unsigned long long)arg1;
- (id)aggregateDictionaryDomain;
- (void)updateWeatherForCities:(id)arg1 withCompletionHandler:(id)arg2;
- (void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned long long)arg2;
- (void)updateWeatherForCity:(id)arg1;
- (void)dealloc;

@end

