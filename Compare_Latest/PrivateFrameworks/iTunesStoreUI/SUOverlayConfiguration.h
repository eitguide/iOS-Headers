/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSRegularExpression, NSString;

@interface SUOverlayConfiguration : NSObject
{
    NSRegularExpression *_bagKeyPattern;
    long long _cornerRadius;
    _Bool _shouldShowNavigationBar;
    struct CGSize _size;
    NSString *_transitionName;
    NSRegularExpression *_urlPattern;
}

@property(readonly, nonatomic) NSString *transitionName; // @synthesize transitionName=_transitionName;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) _Bool shouldShowNavigationBar; // @synthesize shouldShowNavigationBar=_shouldShowNavigationBar;
@property(readonly, nonatomic) long long cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (_Bool)matchesURLBagKey:(id)arg1;
- (_Bool)matchesURL:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

