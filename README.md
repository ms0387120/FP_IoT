# 智慧校園-機車塔車位流量監控

* 程式語言

  - C
  - Python

* 在校園內機車塔車位在尖峰時段一位難求，為了瞭解機車塔空餘停車位的分布情形及即時觀看車位動態

* 在機車塔各樓層出入口設置流量監控，搭配自製網頁可顯示各樓層機車數
![](https://i.imgur.com/flbSvxy.png)

* 機車塔樓層 3D 建議圖(紅為出口，綠為入口)
![](https://i.imgur.com/vTOodiP.png)

* 使用 LinkIt One 板子連接校園內的 LoRa 網路通訊模組，再透過 LoRa 網路通訊 模組上傳到雲端平台
* 電腦透過 Python 將 MQTT 訊息轉傳至 MediaTek Cloud Sandbox
* 網路流程示意圖如下：
![](https://i.imgur.com/KIydwJo.png)


* 個人負責

  - 板子程式撰寫
  - python 程式撰寫(將 MQTT 訊息轉傳至雲端)
  
* 使用器材

  - LinkIt One 板子
  - HC-SR501 人體紅外線感應模組
  ![](https://i.imgur.com/ZDlcedV.png)
  - LoRa 網路
  - LoRa 天線

* IDE

  - Arduino
  
