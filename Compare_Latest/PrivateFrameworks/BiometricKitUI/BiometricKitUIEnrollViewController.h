/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "BiometricKitDelegate-Protocol.h"

@class BiometricKit, NSMutableDictionary;

@interface BiometricKitUIEnrollViewController : UIViewController <BiometricKitDelegate>
{
    NSMutableDictionary *_properties;
    BiometricKit *_biometricKit;
    id <BiometricKitUIEnrollResultDelegate> _delegate;
}

@property(nonatomic) id <BiometricKitUIEnrollResultDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BiometricKit *biometricKit; // @synthesize biometricKit=_biometricKit;
- (void).cxx_destruct;
- (void)restartEnroll;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;

@end

