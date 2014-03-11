/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIKBThemedView, UILabel;

@interface UIKeyboardCandidateBarCell : UICollectionViewCell <UIKBCacheableView> {
    BOOL _beginsFirstPage;
    NSString *_candidateText;
    BOOL _endsLastPage;
    BOOL _isAtLeftEdge;
    UILabel *_label;
    UIKBThemedView *_themedView;
}

@property BOOL beginsFirstPage;
@property(readonly) BOOL cacheDeferable;
@property(readonly) NSString * cacheKey;
@property(readonly) float cachedWidth;
@property(copy) NSString * candidateText;
@property BOOL endsLastPage;
@property BOOL isAtLeftEdge;
@property(readonly) BOOL keepNonPersistent;
@property(retain) UILabel * label;
@property(retain) UIKBThemedView * themedView;

+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })cacheInsets;
+ (id)font;
+ (BOOL)highlightAffectsBackground;
+ (id)reuseIdentifier;
+ (id)textColorWithHighlight:(BOOL)arg1 whiteText:(BOOL)arg2;
+ (float)widthForCandidateText:(id)arg1;

- (void)_setRenderConfig:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (BOOL)beginsFirstPage;
- (BOOL)cacheDeferable;
- (id)cacheKey;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (float)cachedWidth;
- (id)candidateText;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)displayLayer:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)endsLastPage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAtLeftEdge;
- (BOOL)keepNonPersistent;
- (id)label;
- (void)prepareForReuse;
- (void)setBeginsFirstPage:(BOOL)arg1;
- (void)setCandidate:(id)arg1;
- (void)setCandidateText:(id)arg1;
- (void)setEndsLastPage:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setIsAtLeftEdge:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setThemedView:(id)arg1;
- (id)themedView;
- (void)updateIsAtLeftEdgeState;
- (void)updateLabels;

@end