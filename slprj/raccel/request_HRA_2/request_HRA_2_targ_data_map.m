    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 48;
            section.data(48)  = dumData; %prealloc

                    ;% rtP.DCVoltageSource_Amplitude
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.PIDController1_D
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.PIDController2_D
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.PIDController1_I
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.PIDController2_I
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.PIDController1_InitialConditionForFilter
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.PIDController2_InitialConditionForFilter
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.PIDController1_InitialConditionForIntegrator
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.PIDController2_InitialConditionForIntegrator
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.PIDController1_N
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.PIDController2_N
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.PIDController1_P
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.PIDController2_P
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.RepeatingSequence_rep_seq_y
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.StateSpace_P1_Size
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 15;

                    ;% rtP.StateSpace_P1
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 17;

                    ;% rtP.StateSpace_P2_Size
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 303;

                    ;% rtP.StateSpace_P2
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 305;

                    ;% rtP.StateSpace_P3_Size
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 309;

                    ;% rtP.StateSpace_P3
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 311;

                    ;% rtP.StateSpace_P4_Size
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 316;

                    ;% rtP.StateSpace_P4
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 318;

                    ;% rtP.StateSpace_P5_Size
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 1046;

                    ;% rtP.StateSpace_P5
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 1048;

                    ;% rtP.StateSpace_P6_Size
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 1054;

                    ;% rtP.StateSpace_P6
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 1056;

                    ;% rtP.StateSpace_P7_Size
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 1059;

                    ;% rtP.StateSpace_P7
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 1061;

                    ;% rtP.StateSpace_P8_Size
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 1064;

                    ;% rtP.StateSpace_P8
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 1066;

                    ;% rtP.StateSpace_P9_Size
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 1069;

                    ;% rtP.StateSpace_P9
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 1071;

                    ;% rtP.StateSpace_P10_Size
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 1072;

                    ;% rtP.StateSpace_P10
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 1074;

                    ;% rtP.donotdeletethisgain_Gain
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 1075;

                    ;% rtP.donotdeletethisgain_Gain_jsdwtssimh
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 1076;

                    ;% rtP.Saturation_UpperSat
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 1077;

                    ;% rtP.Saturation_LowerSat
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 1078;

                    ;% rtP.Saturation1_UpperSat
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 1079;

                    ;% rtP.Saturation1_LowerSat
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 1080;

                    ;% rtP.LookUpTable1_bp01Data
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 1081;

                    ;% rtP.donotdeletethisgain_Gain_k14ykx3pkj
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 1083;

                    ;% rtP.Iref_Value
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 1084;

                    ;% rtP.gate_Value
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 1085;

                    ;% rtP.Constant_Value
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 1086;

                    ;% rtP.Vref_Value
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 1087;

                    ;% rtP.eee_Value
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 1088;

                    ;% rtP.gate_Value_graafvp4kv
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 1089;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 32;
            section.data(32)  = dumData; %prealloc

                    ;% rtB.owzdk0illb
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.gamjmndv1b
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.deubnzhi3h
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 9;

                    ;% rtB.hwjl5eruit
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 10;

                    ;% rtB.gwmbzbwk2y
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 11;

                    ;% rtB.leb2el2gtw
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 12;

                    ;% rtB.dfkp4apu00
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 13;

                    ;% rtB.f10vyfjkrm
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 14;

                    ;% rtB.ksjtrywmna
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 15;

                    ;% rtB.elk3ilbmav
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 16;

                    ;% rtB.eqv1d3ta40
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 17;

                    ;% rtB.oy4djh0koh
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 18;

                    ;% rtB.cmfb3ygnuq
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 19;

                    ;% rtB.cd0le2fmoz
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 20;

                    ;% rtB.ixlfbkob4o
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 21;

                    ;% rtB.evppity5rx
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 22;

                    ;% rtB.cho0oeabrc
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 23;

                    ;% rtB.dcdltlmiwd
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 24;

                    ;% rtB.h23hfdtqqg
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 25;

                    ;% rtB.d4jyoenzfl
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 26;

                    ;% rtB.ntaftztpcu
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 27;

                    ;% rtB.i4xkh0crvp
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 28;

                    ;% rtB.bfek3s2pqq
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 29;

                    ;% rtB.jkvhtq433b
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 30;

                    ;% rtB.l0niisejas
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 31;

                    ;% rtB.p522ezegmf
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 32;

                    ;% rtB.jo0kmcxnjz
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 33;

                    ;% rtB.mygfhnueqq
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 34;

                    ;% rtB.hd3y3zrd2a
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 35;

                    ;% rtB.k0h3i5nv5a
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 36;

                    ;% rtB.ch2i202eqg
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 37;

                    ;% rtB.d5rtwafbe0
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 38;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 3;
        sectIdxOffset = 1;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.cxpfuvgpez
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.nswo4x3pxj
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.fuwz2xgzrs.LoggedData
                    section.data(2).logicalSrcIdx = 2;
                    section.data(2).dtTransOffset = 22;

                    ;% rtDW.cnglgzar0j.LoggedData
                    section.data(3).logicalSrcIdx = 3;
                    section.data(3).dtTransOffset = 23;

                    ;% rtDW.h1r4xyp5qa.LoggedData
                    section.data(4).logicalSrcIdx = 4;
                    section.data(4).dtTransOffset = 24;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% rtDW.cix3io0m5t
                    section.data(1).logicalSrcIdx = 5;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ggcfliu0c2
                    section.data(2).logicalSrcIdx = 6;
                    section.data(2).dtTransOffset = 23;

                    ;% rtDW.izb2kmgn0c
                    section.data(3).logicalSrcIdx = 7;
                    section.data(3).dtTransOffset = 27;

                    ;% rtDW.pto100u0i0
                    section.data(4).logicalSrcIdx = 8;
                    section.data(4).dtTransOffset = 28;

                    ;% rtDW.gi0ldnstrz
                    section.data(5).logicalSrcIdx = 9;
                    section.data(5).dtTransOffset = 29;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 3100114344;
    targMap.checksum1 = 1106828568;
    targMap.checksum2 = 2429298084;
    targMap.checksum3 = 904046933;

