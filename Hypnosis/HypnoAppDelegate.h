//
//  HypnoAppDelegate.h
//  Hypnosis
//
//  Created by Fabrice Guillaume on 1/27/13.
//  Copyright (c) 2013 Fabrice Guillaume. All rights reserved.
//

#import <UIKit/UIKit.h>

// "forward declaration"
@class HypnosisView;

@interface HypnoAppDelegate : UIResponder <UIApplicationDelegate>
{
    HypnosisView *view;
}

@property (strong, nonatomic) UIWindow *window;

@end
