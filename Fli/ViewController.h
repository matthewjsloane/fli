//
//  ViewController.h
//  Fli
//
//  Created by Matthew Sloane on 6/5/16.
//  Copyright © 2016 Matthew Sloane. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OpenEars/OEEventsObserver.h>

@interface ViewController : UIViewController <OEEventsObserverDelegate>

@property OEEventsObserver *openEarsEventsObserver;

@end

