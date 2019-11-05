//
//  ViewController.swift
//  ValidateEarlGrey
//
//  Created by Venkatnarayansetty, Badarinath on 11/4/19.
//  Copyright © 2019 Venkatnarayansetty, Badarinath. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var loginButton: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        loginButton.accessibilityLabel = "login"
    }


}

