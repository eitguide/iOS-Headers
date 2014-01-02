/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSDate, NSString, PKPrintSettings;

@interface PKJob : NSObject
{
    long long number;
    long long mediaProgress;
    long long mediaSheets;
    long long mediaSheetsCompleted;
    NSString *printerDisplayName;
    long long printerKind;
    NSString *printerLocation;
    PKPrintSettings *settings;
    long long state;
    NSDate *timeAtCompleted;
    NSDate *timeAtCreation;
    NSDate *timeAtProcessing;
    NSData *thumbnailImage;
}

+ (id)jobs;
+ (id)currentJob;
@property(retain, nonatomic) NSData *thumbnailImage; // @synthesize thumbnailImage;
@property(retain, nonatomic) NSDate *timeAtProcessing; // @synthesize timeAtProcessing;
@property(retain, nonatomic) NSDate *timeAtCreation; // @synthesize timeAtCreation;
@property(retain, nonatomic) NSDate *timeAtCompleted; // @synthesize timeAtCompleted;
@property(nonatomic) long long state; // @synthesize state;
@property(retain, nonatomic) PKPrintSettings *settings; // @synthesize settings;
@property(retain, nonatomic) NSString *printerLocation; // @synthesize printerLocation;
@property(nonatomic) long long printerKind; // @synthesize printerKind;
@property(retain, nonatomic) NSString *printerDisplayName; // @synthesize printerDisplayName;
@property(nonatomic) long long mediaSheetsCompleted; // @synthesize mediaSheetsCompleted;
@property(nonatomic) long long mediaSheets; // @synthesize mediaSheets;
@property(nonatomic) long long mediaProgress; // @synthesize mediaProgress;
@property(nonatomic) long long number; // @synthesize number;
- (long long)update;
- (long long)cancel;

@end

