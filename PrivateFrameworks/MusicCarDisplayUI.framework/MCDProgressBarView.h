/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDProgressBarView : UIView {
    UIView * _barView;
    UIImageView * _indicatorView;
    double  _progress;
}

@property (nonatomic, retain) UIView *barView;
@property (nonatomic, retain) UIImageView *indicatorView;
@property (nonatomic) double progress;

- (void).cxx_destruct;
- (id)barView;
- (id)indicatorView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)progress;
- (void)setBarView:(id)arg1;
- (void)setIndicatorHidden:(bool)arg1;
- (void)setIndicatorView:(id)arg1;
- (void)setProgress:(double)arg1;

@end
