/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIViewControllerContextTransitioningEx-Protocol.h"

@class NSArray, UIView, _UIViewControllerTransitionCoordinator;

@interface _UIViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioningEx>
{
    float _previousPercentComplete;
    struct {
        unsigned int interactorImplementsCompletionSpeed:1;
        unsigned int interactorImplementsCompletionCurve:1;
        unsigned int transitionWasCancelled:1;
        unsigned int transitionIsInFlight:1;
        unsigned int transitionIsCompleting:1;
    } _transitionContextFlags;
    BOOL _initiallyInteractive;
    BOOL _isCurrentlyInteractive;
    BOOL _isAnimated;
    BOOL __isPresentation;
    NSArray *__containerViews;
    float __percentOffset;
    id <UIViewControllerAnimatedTransitioning> __animator;
    id <UIViewControllerInteractiveTransitioning> __interactor;
    UIView *_containerView;
    id __willCompleteHandler;
    id __completionHandler;
    float __completionVelocity;
    int __completionCurve;
    _UIViewControllerTransitionCoordinator *__auxContext;
    id __interactiveUpdateHandler;
    id __postInteractiveCompletionHandler;
    int _presentationStyle;
    double __duration;
}

+ (id)_associatedTransitionContextForObject:(id)arg1;
@property(nonatomic, setter=_setIsPresentation:) BOOL _isPresentation; // @synthesize _isPresentation=__isPresentation;
@property(nonatomic, setter=_setPresentationStyle:) int presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(copy, nonatomic, setter=_setPostInteractiveCompletionHandler:) id _postInteractiveCompletionHandler; // @synthesize _postInteractiveCompletionHandler=__postInteractiveCompletionHandler;
@property(copy, nonatomic, setter=_setInteractiveUpdateHandler:) id _interactiveUpdateHandler; // @synthesize _interactiveUpdateHandler=__interactiveUpdateHandler;
@property(nonatomic, setter=_setDuration:) double _duration; // @synthesize _duration=__duration;
@property(retain, nonatomic, setter=_setAuxContext:) _UIViewControllerTransitionCoordinator *_auxContext; // @synthesize _auxContext=__auxContext;
@property(nonatomic, setter=_setCompletionCurve:) int _completionCurve; // @synthesize _completionCurve=__completionCurve;
@property(nonatomic, setter=_setCompletionVelocity:) float _completionVelocity; // @synthesize _completionVelocity=__completionVelocity;
@property(nonatomic, setter=_setIsAnimated:) BOOL isAnimated; // @synthesize isAnimated=_isAnimated;
@property(nonatomic, setter=_setIsCurrentlyInteractive:) BOOL isCurrentlyInteractive; // @synthesize isCurrentlyInteractive=_isCurrentlyInteractive;
@property(nonatomic, setter=_setInitiallyInteractive:) BOOL initiallyInteractive; // @synthesize initiallyInteractive=_initiallyInteractive;
@property(copy, nonatomic, setter=_setCompletionHandler:) id _completionHandler; // @synthesize _completionHandler=__completionHandler;
@property(copy, nonatomic, setter=_setWillCompleteHandler:) id _willCompleteHandler; // @synthesize _willCompleteHandler=__willCompleteHandler;
@property(nonatomic, setter=_setContainerView:) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic, setter=_setInteractor:) id <UIViewControllerInteractiveTransitioning> _interactor; // @synthesize _interactor=__interactor;
@property(nonatomic, setter=_setAnimator:) id <UIViewControllerAnimatedTransitioning> _animator; // @synthesize _animator=__animator;
@property(nonatomic, setter=_setPercentOffset:) float _percentOffset; // @synthesize _percentOffset=__percentOffset;
@property(retain, nonatomic, setter=_setContainerViews:) NSArray *_containerViews; // @synthesize _containerViews=__containerViews;
- (void)__runAlongsideAnimations;
- (void)_interactivityDidChange:(BOOL)arg1;
- (void)_runAlongsideCompletions;
@property(nonatomic, setter=_setTransitionIsCompleting:) BOOL _transitionIsCompleting;
@property(nonatomic, setter=_setTransitionIsInFlight:) BOOL _transitionIsInFlight;
- (BOOL)transitionWasCancelled;
- (struct CGRect)finalFrameForViewController:(id)arg1;
- (struct CGRect)initialFrameForViewController:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (void)completeTransition:(BOOL)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(float)arg1;
- (void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(float)arg1;
- (void)_setPreviousPercentComplete:(float)arg1;
- (float)_previousPercentComplete;
- (id)_transitionCoordinator;
- (BOOL)isInteractive;
- (void)dealloc;
- (id)init;

@end
