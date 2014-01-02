/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSString, UIViewController;

// Not exported
@interface UIStoryboardSegueTemplate : NSObject <NSCoding>
{
    NSString *_identifier;
    NSString *_segueClassName;
    UIViewController *_viewController;
    NSString *_destinationViewControllerIdentifier;
    _Bool _performOnViewLoad;
}

@property(nonatomic) _Bool performOnViewLoad; // @synthesize performOnViewLoad=_performOnViewLoad;
@property(nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)perform:(id)arg1;
- (void)_perform:(id)arg1;
- (id)segueWithDestinationViewController:(id)arg1;
- (Class)effectiveSegueClass;
- (id)defaultSegueClassName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

